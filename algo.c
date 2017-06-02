/*
** algo.c for bsq in /home/charri_c/CPE/CPE_2016_BSQ
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Mon Dec  5 09:28:56 2016 Corentin
** Last update Fri Dec 16 16:45:59 2016 Corentin
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "bsq.h"

int	calc_max_square(char **map, int x, int y)
{
  int	tmp_x;
  int	tmp_y;
  int	min;

  tmp_y = 0;
  tmp_x = 0;
  while (map[x])
    {
      tmp_x++;
      x++;
    }
  while (map[0][y] != '\0')
    {
      tmp_y++;
      y++;
    }
  min = smaller(tmp_x, tmp_y);
  return (min);
}

int	check_map_empty(char **map, t_bsq *square)
{
  if (check_obstacle(map) == 1)
    {
      square->size = calc_max_square(map, 0, 0);
      return (1);
    }
  return (0);
}

int	apply_algo(char **map, t_bsq *square, t_stock *stock)
{
  int	i;
  int	j;
  int	carre;

  i = 0 + 0 * (stock->tmp = 0) + 0 * (carre = 0);
  if (check_map_empty(map, square) == 1)
    return (0);
  while (map[i] != NULL)
    {
      j = 0;
      while (map[i][j] != '\0')
	{
	  if (map[i][j] != 'o')
	    while (is_square(map, i, j, carre) == 0)
	      {
		carre++;
		add_max(carre, stock, i, j);
	      }
	  j++;
	}
      i++;
    }
  fill_struct(square, stock->stock_i, stock->stock_j, stock->tmp);
  return (0);
}

int	is_square(char **map, int x, int y, int carre)
{
  int	stock_y;
  int	stock_x;

  stock_y = y;
  stock_x = x;
  while (stock_x <= (carre + x))
    {
      if  (map[stock_x] == '\0')
	return (1);
      stock_y = y;
      while (stock_y <= (carre + y))
  	{
	  if (map[stock_x][stock_y] == '\0')
	    return (1);
  	  if (map[stock_x][stock_y] == 'o')
  	    return (1);
  	  stock_y++;
  	}
      stock_x++;
    }
  return (0);
}

char	**print_square(char **map, int x, int y, t_bsq *square)
{
  int	i;
  int	j;
  int	stock;

  i = 0;
  stock = y;
  while (i < square->size)
    {
      j = 0;
      y = stock;
      while (j < square->size)
	{
	  map[x][y] = 'x';
	  j++;
	  y++;
	}
      x++;
      i++;
    }
  return (map);
}
