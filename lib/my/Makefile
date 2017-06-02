##
## Makefile for printf in /home/charri_c/PSU/PSU_2016_my_printf
## 
## Made by Corentin Charriot
## Login   <charri_c@epitech.net>
## 
## Started on  Sat Nov 12 19:14:06 2016 Corentin Charriot
## Last update Sun Dec  4 14:48:14 2016 Corentin
##

RM	= 	rm -rf

SRC	=	my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_power_rec.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_tab.c		\
		my_square_root.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_strdup.c			\
		my_concat.c			\
		my_put_nbr_base.c		\
		my_show_tab.c

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
