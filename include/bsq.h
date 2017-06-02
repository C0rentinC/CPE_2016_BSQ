/*
** bsq.h for bsq in /home/charri_c/CPE/CPE_2016_BSQ/include
**
** Made by Corentin
** Login   <charri_c@epitech.net>
**
** Started on  Sun Dec  4 14:40:20 2016 Corentin
** Last update Wed Dec 14 18:04:07 2016 Corentin
*/

#ifndef BSQ_H_
# define BSQ_H_

typedef struct s_bsq
{
  int		x;
  int		y;
  int		size;
}		t_bsq;

typedef struct s_stock
{
  int		stock_i;
  int		stock_j;
  int		tmp;
}		t_stock;

char            **my_read(char *pathname);
int             check_first_line(char *);
int             check_error(char **);
char            **my_str_to_wordtab(char *str, char a);
void            free_tab(char **tab);
int		recup_obs2(char **, int y);
int		recup_obs(char **, int x);
int		is_square(char **map, int, int, int);
char		**tabdup(char **);
char		**print_square(char **, int, int, t_bsq *square);
int		apply_algo(char **map, t_bsq *square, t_stock *stock);
int		check_obstacle(char **map);
void		fill_struct(t_bsq *square, int x, int y, int tmp);
int		smaller(int a, int b);
void		init_struct_square(t_bsq *square);
int		count_line(char *);
int		check_map(char **map);
int		check_char(char **map);
int		check_obstacle(char **map);
void		add_max(int carre, t_stock *stock, int i, int j);
void		show_it(char **);

#endif /* !BSQ_H_ */
