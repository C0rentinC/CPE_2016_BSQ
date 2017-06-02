/*
** my_strdup.c for strdup in /home/charri_c/delivery/CPool_Day08/task01
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Wed Oct 12 09:12:32 2016 Corentin Charriot
** Last update Sat Nov 26 17:44:40 2016 Corentin
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *src)
{
  char	*res;
  int	i;

  if ((res = malloc(sizeof(char) * my_strlen(src) + 1)) == NULL)
    return (NULL);
  i = 0;
  while (src[i] != '\0')
    {
      res[i] = src[i];
      i = i + 1;
    }
  res[i] = '\0';
  return (res);
}
