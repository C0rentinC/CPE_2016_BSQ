/*
** utils.c for bsq in /home/charri_c/CPE/CPE_2016_BSQ
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Wed Dec  7 21:01:32 2016 Corentin
** Last update Wed Dec 14 18:03:50 2016 Corentin
*/

#include <unistd.h>
#include "my.h"
#include "bsq.h"

int     smaller(int a, int b)
{
  int   min;

  if (a < b)
    min = a;
  if (a > b)
    min = b;
  if (a == b)
    min = a;
  return (min);
}

void    fill_struct(t_bsq *square, int x, int y, int tmp)
{
  square->x = x;
  square->y = y;
  square->size = tmp;
}

void	init_struct_square(t_bsq *square)
{
  square->size = 0;
  square->x = 0;
  square->y = 0;
}

void	add_max(int carre, t_stock *stock, int i, int j)
{
  if (carre > stock->tmp)
    {
      stock->tmp = carre;
      stock->stock_i = i;
      stock->stock_j = j;
    }
}

void	show_it(char **tab)
{
  int   i;
  int   len;

  i = 0;
  len = my_strlen(tab[i]);
  while (tab[i])
    {
      write(1, tab[i], len);
      write(1, "\n", 1);
      i++;
    }
}
