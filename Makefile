##
## EPITECH PROJECT, 2026
## headerfly
## File description:
## Makefile
##

NAME = headerfly

CC = clang

SRCS = 	main.c				\
	./src/args/check.c		\
	./src/args/destroy.c		\
	./src/args/parse.c		\
	./src/info_project/destroy.c	\
	./src/info_project/get.c	\
	./src/info_project/init.c	\
	./src/utils_array.c		\
	./src/utils_error.c		\
	./src/utils_file.c		\
	./src/utils_helper.c		\
	./src/utils_inputs.c		\

CFLAGS = -I./include/ -Wall -Wextra -Werror -g3

TEST_FLAGS = -I./include/ ./tests/*.c -lcriterion --coverage

TEST_SRC =

UNIT_TESTS = unit_tests

all : $(NAME)

$(NAME) : $(SRCS)

	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

unit_tests : fclean all

	$(CC) -o $(UNIT_TESTS) $(TEST_SRC) $(TEST_FLAGS)

tests_run : unit_tests

	./$(UNIT_TESTS)

clean :

	rm -f *.o *.gcno *.gcda *.gcov $(UNIT_TESTS)

fclean : clean

	rm -f $(NAME)

re : fclean all
