/*
** my_put_nbr.c for putnbr in /home/charri_c/delivery/CPool_Day03
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Wed Oct  5 11:13:41 2016 Corentin Charriot
** Last update Wed Nov  9 18:48:04 2016 Corentin Charriot
*/

#include <unistd.h>
#include "my.h"

int	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    {
      write(1, "-2147483648", 11);
      return (0);
    }
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb < 10)
    {
      my_putchar(nb + '0');
    }
  else
    {
      my_put_nbr(nb / 10);
      my_putchar(nb % 10 + '0');
    }
  return (0);
}
