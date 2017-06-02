/*
** my_isneg.c for piscine in /home/charri_c/delivery/CPool_Day03
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Wed Oct  5 09:18:49 2016 Corentin Charriot
** Last update Fri Oct 14 13:53:04 2016 Corentin Charriot
*/

#include "my.h"

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}
