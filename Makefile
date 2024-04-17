##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

SRC_TEST = $(shell find tests/ -name '*.c' -not -name 'main.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	gcc -o unit_tests $(SRC) tests/*.c $(CFLAGS) --coverage -lcriterion
	./unit_tests 
	gcovr -e /tests
	gcovr -e /tests -b


tests_clean:
	rm unit_tests
	$(RM) *.gnco 
	$(RM) *.gcda

tests_fclean: tests_clean

tests_re: tests_fclean

.PHONY:	all clean fclean re tests_run tests_clean tests_fclean tests_re
