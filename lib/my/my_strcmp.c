/*
** my_strcmp.c for strcmp in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 12:54:34 2016 Corentin Charriot
** Last update Mon Oct 10 15:26:36 2016 Corentin Charriot
*/

int	my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] || s2[i])
    {
      if (s1[i] == s2[i])
	i++;
      else
	return (s1[i] - s2[i]);
    }
  return (0);
}
