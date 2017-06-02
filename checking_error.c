/*
** checking_error.c for bsq in /home/charri_c/CPE/CPE_2016_BSQ
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Wed Dec  7 21:06:06 2016 Corentin
** Last update Tue Dec 13 22:39:58 2016 Corentin
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "bsq.h"

int      check_obstacle(char **map)
{
  int    i;
  int    j;
  int    count;

  i = 0;
  count = 0;
  while (map[i] != NULL)
    {
      j = 0;
      while (map[i][j] != '\0')
	{
	  if (map[i][j] == 'o')
	    count = count + 1;
	  j++;
	}
      i++;
    }
  if (count == 0)
    return (1);
  return (0);
}

int      check_char(char **map)
{
  int    i;
  int    j;

  i = 0;
  while (map[i] != NULL)
    {
      j = 0;
      while (map[i][j] != '\0')
	{
	  if (map[i][j] == '.' || map[i][j] == 'o')
	    j++;
	  else
	    return (1);
	}
      i++;
    }
  return (0);
}

int      check_map(char **map)
{
  int    i;
  int    len;
  int    len2;

  i = 0;
  while (map[i + 1])
    {
      len = my_strlen(map[i]);
      len2 = my_strlen(map[i + 1]);
      if (len != len2)
	return (1);
      i++;
    }
  return (0);
}

int     count_line(char *buffer)
{
  int   i;
  int	count;

  count = 0;
  i = 0;
  while (buffer[i])
    {
      if (buffer[i] == '\n')
	count++;
      i++;
    }
  count = count - 1;
  return (count);
}

int	check_first_line(char *str)
{
  int   nb;
  int	size;
  int	i;

  i = 0;
  nb = 0;
  size = count_line(str);
  while (str[i] != '\n' && str[i] != '\0')
    {
      nb = nb * 10;
      nb = nb + str[i] - '0';
      i++;
    }
  if (nb != size)
    return (1);
  return (0);
}
