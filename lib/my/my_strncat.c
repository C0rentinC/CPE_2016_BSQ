/*
** my_strncat.c for strncat in /home/charri_c/delivery/CPool_Day07/lib/my
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Tue Oct 11 13:27:12 2016 Corentin Charriot
** Last update Tue Oct 11 20:51:28 2016 Corentin Charriot
*/

char    *my_strncat(char *dest, char *src, int n)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (dest[i])
    i = i + 1;
  while (n > j)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
