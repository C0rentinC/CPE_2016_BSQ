/*
** my_sort_in_tab.c for sort in /home/charri_c/delivery/pool 4
** 
** Made by Corentin Charriot
** Login   <charri_c@epitech.net>
** 
** Started on  Thu Oct  6 19:53:35 2016 Corentin Charriot
** Last update Thu Oct  6 20:52:27 2016 Corentin Charriot
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	a;

  i = 0;
  while (i < size - 1)
    {
      if (tab[i] > tab[i + 1])
	{
	  a = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = a;
	  i = 0;
	}
      else
	i = i + 1;
    }
}
