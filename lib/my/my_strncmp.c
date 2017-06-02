/*
** my_strncmp.c for strncmp in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 13:52:36 2016 Corentin Charriot
** Last update Mon Oct 10 14:56:36 2016 Corentin Charriot
*/

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (i < n || s1[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
