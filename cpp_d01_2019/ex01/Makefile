##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Make file
##

CC = gcc

SRC = 	menger.c		\
	main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -std=gnu11 -Wall -Wextra -lm -L./

RM = rm -f

NAME = menger

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
