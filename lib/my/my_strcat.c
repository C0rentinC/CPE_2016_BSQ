/*
** my_strcat.c for strcat in /home/charri_c/delivery/CPool_Day07/lib/my
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Tue Oct 11 10:53:21 2016 Corentin Charriot
** Last update Tue Oct 11 13:55:43 2016 Corentin Charriot
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    {
      i++;
    }
  while (src[j])
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
