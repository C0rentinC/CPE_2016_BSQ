/*
** my_strstr.c for strstr in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 18:14:56 2016 Corentin Charriot
** Last update Tue Oct 11 10:03:41 2016 Corentin Charriot
*/

#include <stdlib.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  if (to_find[0] == '\0')
    return (str);
  while (str[i] != '\0')
    {
      j = 0;
      if (str[i] == to_find[j])
	{
	  while (to_find[j] && str[i + j] == to_find[j])
	    j++;
	  if (to_find[j] == '\0')
	    return (&(str[i]));
	}
      i++;
    }
  return (NULL);
}
