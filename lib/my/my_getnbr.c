/*
** my_getnbr.c for getnbr in /home/charri_c/delivery/CPool_Day04
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Thu Oct  6 10:57:29 2016 Corentin Charriot
** Last update Thu Nov 17 15:17:09 2016 Corentin Charriot
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	neg;

  nb = 0;
  neg = 1;
  i = 0;
  if (str[0] == '-')
    {
      i = 1;
      neg = 0;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10;
      nb = nb + str[i] - '0';
      i = i + 1;
    }
  if (neg == 0)
    nb = nb * -1;
  return (nb);
}
