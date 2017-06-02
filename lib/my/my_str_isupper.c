/*
** my_str_isupper.c for isupper in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 16:59:57 2016 Corentin Charriot
** Last update Mon Oct 10 17:00:25 2016 Corentin Charriot
*/

int	my_str_isupper(char *str)
{
  int   i;

  i = 0;
  if (str == '\0')
    return (1);
  while (str[i])
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
