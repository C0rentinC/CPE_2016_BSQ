/*
** my_str_isprintable.c for printable in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 17:26:18 2016 Corentin Charriot
** Last update Wed Oct 12 13:40:14 2016 Corentin Charriot
*/

int	my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  if (str == '\0')
    return (1);
  while (str[i])
    {
      if (str[i] >= 32 && str[i] <= 126)
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
