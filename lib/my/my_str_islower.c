/*
** my_str_islower.c for islower in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 16:47:52 2016 Corentin Charriot
** Last update Mon Oct 10 16:59:20 2016 Corentin Charriot
*/

int	my_str_islower(char *str)
{
  int   i;

  i = 0;
  if (str == '\0')
    return (1);
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
