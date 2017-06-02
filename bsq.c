/*
** bsq.c for bsq in /home/charri_c/CPE/CPE_2016_BSQ
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Tue Nov 29 09:16:33 2016 Corentin
** Last update Thu Dec 15 14:22:56 2016 Corentin
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "bsq.h"
#include "my.h"

char		**my_read(char *pathname)
{
  int		fd;
  char		*buffer;
  char		**map;
  struct stat	sb;

  if ((stat(pathname, &sb)) == -1)
    return (NULL);
  if ((buffer = malloc(sizeof(char) * sb.st_size + 1)) == NULL)
    return (NULL);
  if ((fd = open(pathname, O_RDONLY)) == -1)
    return (NULL);
  if ((read(fd, buffer, sb.st_size)) == -1)
    return (NULL);
  buffer[sb.st_size] = 0;
  close(fd);
  if ((check_first_line(buffer)) == 1)
    {
      free(buffer);
      my_putstr("The number of line isn't correct\n");
      exit(84);
    }
  if ((map = my_str_to_wordtab(buffer, '\n')) == NULL)
    return (NULL);
  free(buffer);
  return (map);
}

int		check_error(char **map)
{
  if (check_map(map) == 1)
    return (1);
  if (check_char(map) == 1)
    return (1);
  return (0);
}

int		main(int argc, char **argv)
{
  char		**tab;
  t_bsq		*square;
  t_stock	*stock;

  (void)argc;
  if ((square = malloc(sizeof(t_bsq))) == NULL)
    return (84);
  if ((stock = malloc(sizeof(t_stock))) == NULL)
    return (84);
  init_struct_square(square);
  if ((tab = my_read(argv[1])) == NULL)
    return (84);
  if ((check_error(tab)) == 1)
    {
      my_putstr("Error bad map !\n");
      return (84);
    }
  apply_algo(tab, square, stock);
  tab = print_square(tab, square->x, square->y, square);
  show_it(tab);
  free_tab(tab);
  free(square);
  free(stock);
  return (0);
}
