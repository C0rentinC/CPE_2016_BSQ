/*
** my_strupcase.c for strupcase in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 15:08:07 2016 Corentin Charriot
** Last update Mon Oct 10 15:29:14 2016 Corentin Charriot
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 97 && str[i] <= 122)
	str[i] = str[i] - 32;
      else
	i++;
    }
  return (str);
}
