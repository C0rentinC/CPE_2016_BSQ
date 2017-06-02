/*
** my_strcapitalize.c for capitalize in /home/charri_c/delivery/CPool_Day06
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Mon Oct 10 15:31:56 2016 Corentin Charriot
** Last update Mon Oct 10 22:00:02 2016 Corentin Charriot
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if (str[i] == ' ' || str[i] >= 33 && str[i] <= 47 ||
	  str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96
	  || str[i] >= 123 && str[i] <= 126)
	{
	  if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	    str[i + 1] = str[i + 1] - 32;
	}
      i++;
    }
  return (str);
}
