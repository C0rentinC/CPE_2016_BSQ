/*
** oui.c for prime in /home/charri_c/delivery/CPool_Day05
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Fri Oct  7 18:39:29 2016 Corentin Charriot
** Last update Fri Oct 14 13:53:17 2016 Corentin Charriot
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
  if (nb <= 2)
    return (2);
  if (nb % 2 == 0)
    nb++;
  while (!my_is_prime(nb))
      nb = nb + 1;
  return (nb);
}
