##
## Makefile for bsq in /home/charri_c/CPE/CPE_2016_BSQ
## 
## Made by Corentin
## Login   <charri_c@epitech.net>
## 
## Started on  Sun Dec  4 14:39:01 2016 Corentin
## Last update Fri Jun  2 13:17:24 2017 Corentin
##


CC	= 	gcc -g

RM	= 	rm -rf

CFLAGS	+= 	-I./include

LIB	=	-L./lib/my -lmy

SRCS	=	bsq.c			\
		algo.c			\
		utils.c			\
		checking_error.c	\
		my_str_to_wordtab.c

OBJS	= 	$(SRCS:.c=.o)

NAME	= 	bsq

all: 		$(NAME)

$(NAME): 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB)

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclean
