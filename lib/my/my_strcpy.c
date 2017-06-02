/*
** my_strcpy.c for strcpy in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 09:04:26 2016 Corentin Charriot
** Last update Mon Oct 10 12:12:53 2016 Corentin Charriot
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
