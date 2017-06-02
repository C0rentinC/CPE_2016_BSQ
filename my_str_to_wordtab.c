/*
** my_str_to_wordtab.c for BSQ in /home/charri_c/CPE/CPE_2016_BSQ
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Sun Dec  4 14:24:26 2016 Corentin
** Last update Tue Dec 13 21:37:38 2016 Corentin
*/

#include <stdlib.h>
#include "bsq.h"
#include "my.h"

void		free_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i])
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

char		**my_str_to_wordtab(char *str, char a)
{
  char		**tab;
  int		i;
  int		x;
  int		y;
  int		size;

  i = -1 + 0 * (x = 0) + 0 * (size = my_strlen(str));
  if ((tab = malloc(sizeof(char*) * (size + 1))) == NULL)
    return (NULL);
  while (str[++i] != '\n');
  i++;
  while (str[i])
    {
      if ((tab[x] = malloc(sizeof(char) * (size + 1))) == NULL)
	return (NULL);
      y = 0;
      while (str[i] != a && str[i] != '\0')
	tab[x][y++] = str[i++];
      tab[x][y] = '\0';
      x++;
      if (str[i] != '\0')
	i++;
    }
  tab[x] = NULL;
  return (tab);
}
