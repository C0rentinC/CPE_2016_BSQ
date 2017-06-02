/*
** my_concat.c for concat in /home/charri_c/PSU/PSU_2016_my_ls/lib/my
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Sat Nov 26 17:52:56 2016 Corentin
** Last update Mon Nov 28 18:00:57 2016 Corentin
*/

#include <stdlib.h>
#include "my.h"

char    *my_concat(char *str, char *str2)
{
  char *result;
  int   i;
  int   j;
  int   total;

  total = my_strlen(str) + my_strlen(str2);
  if ((result = malloc(sizeof(char) * (total + 2))) == NULL)
    return (NULL);
  j = 0;
  i = 0;
  while (str[i] != '\0')
    result[j++] = str[i++];
  i = 0;
  while (str2[i] != '\0' && str2[i] != '\n')
    result[j++] = str2[i++];
  result[j] = '\0';
  return (result);
}
