/*
** my_putchar.c for putchar in /home/charri_c/delivery/CPool_Day07/lib/my
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Tue Oct 11 10:31:29 2016 Corentin Charriot
** Last update Fri Oct 14 13:49:37 2016 Corentin Charriot
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
