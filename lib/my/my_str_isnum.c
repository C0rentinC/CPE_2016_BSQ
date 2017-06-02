/*
** my_str_isnum.c for isnum in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 16:37:55 2016 Corentin Charriot
** Last update Mon Oct 10 16:43:44 2016 Corentin Charriot
*/

int	my_str_isnum(char *str)
{
  int   i;

  i = 0;
  if (str == '\0')
    return (1);
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
