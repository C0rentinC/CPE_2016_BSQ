/*
** my_power_rec.c for oui in /home/charri_c/delivery/day5
** 
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
** 
** Started on  Fri Oct  7 12:22:41 2016 Corentin Charriot
** Last update Fri Oct  7 13:57:27 2016 Corentin Charriot
*/

int     my_power_rec(int nb, int p)
{
  if (p == 0)
    return (1);
  else if (p == 1)
    return (nb);
  else if (p < 0)
    return (0);
  else
    return (nb * my_power_rec(nb, p - 1));
}
