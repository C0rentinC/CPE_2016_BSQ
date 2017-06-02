/*
** my_is_prime.c for prime in /home/charri_c/delivery/day5
** 
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
** 
** Started on  Fri Oct  7 14:11:10 2016 Corentin Charriot
** Last update Fri Oct  7 19:31:38 2016 Corentin Charriot
*/

int	my_is_prime(int nb)
{
  int	i;

  if (nb < 2)
    return (0);
  else if (nb == 2)
    return (1);
  else if (nb % 2 == 0)
    return (0);
  else
    {
      i = 3;
      while ((i * i) <= nb)
	{
	  if ((nb % i) == 0)
	    return (0);
	  i = i + 1;
	}
    }
  return (1);
}
