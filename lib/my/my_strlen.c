/*
** my_strlen.c for strlen in /home/charri_c/delivery/CPool_Day04
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Thu Oct  6 09:47:38 2016 Corentin Charriot
** Last update Thu Dec  1 10:46:23 2016 Corentin
*/

#include <stdlib.h>
#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i])
    {
      i = i + 1;
    }
  return (i);
}
