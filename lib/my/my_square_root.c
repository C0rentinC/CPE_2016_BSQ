/*
** my_square_root.c for square in /home/charri_c/delivery/day5
**
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
**
** Started on  Fri Oct  7 13:58:07 2016 Corentin Charriot
** Last update Tue Oct 11 22:18:43 2016 Corentin Charriot
*/

int	my_square_root(int nb)
{
  int	root;
  int	res;

  if (nb == 0)
    return (0);
  if (nb < 0)
    return (0);
  root = 1;
  while ((res = (root * root)) <= nb)
    {
      if (res == nb)
	return (root);
      if (root > 46340)
	return (0);
      res = nb / root;
      root = root + 1;
    }
  return (0);
}
