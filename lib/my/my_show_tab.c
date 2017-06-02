/*
** my_show_tab.c for show_tab in /home/charri_c/PSU/PSU_2016_my_ls/lib/my
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Tue Nov 29 19:47:29 2016 Corentin
** Last update Wed Nov 30 17:14:57 2016 Corentin
*/

#include "my.h"

void	my_show_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
