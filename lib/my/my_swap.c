/*
** my_swap.c for swap in /home/charri_c/delivery/CPool_Day04
** 
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
** 
** Started on  Thu Oct  6 09:07:38 2016 Corentin Charriot
** Last update Thu Oct  6 19:09:10 2016 Corentin Charriot
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
