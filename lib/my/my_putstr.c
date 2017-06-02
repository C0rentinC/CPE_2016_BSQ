/*
** my_putstr.c for putstr in /home/charri_c/delivery/CPool_Day04
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Thu Oct  6 09:23:48 2016 Corentin Charriot
** Last update Sat Nov 12 18:07:37 2016 Corentin Charriot
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	my_putstr(char *str)
{
  if (str == NULL)
    {
      write(1, "(null)", 6);
      return (0);
    }
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
