##
## Makefile for  in /home/karst_j/rendu/B1/Prog Elem/CPE_2014_bsq
## 
## Made by Julien Karst
## Login   <karst_j@epitech.net>
## 
## Started on  Mon Dec 22 13:25:12 2014 Julien Karst
## Last update Fri Jan 23 10:13:37 2015 Julien Karst
##

NAME	= bsq

CC	= gcc

CFLAGS	= -I./include

SRC	= src/main.c \
	  src/fonc_base.c \
	  src/fonc.c \
	  src/malloc.c \
	  src/put_in_tab.c \
	  src/algo.c \
	  src/my_fonc.c \
	  src/display.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -Ofast -Wall -Wxtra -pedantic -ansi 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
