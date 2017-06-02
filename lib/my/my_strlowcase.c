/*
** my_strlowcase.c for lowcase in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 15:30:39 2016 Corentin Charriot
** Last update Thu Dec  1 17:30:37 2016 Corentin
*/

char    *my_strlowcase(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      else
	i++;
    }
  return (str);
}
