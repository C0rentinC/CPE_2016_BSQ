/*
** my_put_nbr.c for putnbr in /home/charri_c/delivery/CPool_Day03
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Wed Oct  5 11:13:41 2016 Corentin Charriot
** Last update Tue Nov 15 20:12:16 2016 Corentin Charriot
*/

#include "my.h"

void	my_put_nbr_base(int nb, char *base)
{
  int	i;

  i = my_strlen(base);
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb / i != 0)
    my_put_nbr_base(nb / i, base);
  my_putchar(base[nb % i]);
}
