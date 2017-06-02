/*
** my_revstr.c for revstr in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 09:36:43 2016 Corentin Charriot
** Last update Fri Oct 14 13:51:10 2016 Corentin Charriot
*/

#include "my.h"

char	*my_revstr(char *str)
{
  char	a;
  int	i;
  int	j;

  i = 0;
  j = my_strlen(str) - 1;
  while (j > i)
    {
      a = str[j];
      str[j] = str[i];
      str[i] = a;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
