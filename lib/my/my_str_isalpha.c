/*
** my_str_isalpha.c for isalpha in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 16:19:20 2016 Corentin Charriot
** Last update Mon Oct 10 16:42:54 2016 Corentin Charriot
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (str == '\0')
    return (1);
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z' ||
	  str[i] >= 'A' && str[i] <= 'Z')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
