/*
** my_strncpy.c for strncpy in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 09:18:08 2016 Corentin Charriot
** Last update Mon Oct 10 12:42:48 2016 Corentin Charriot
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i++;
      if (src[i] == '\0')
	dest[i] = '\0';
    }
  return (dest);
}
