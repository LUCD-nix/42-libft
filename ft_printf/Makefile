NAME = libftprintf.a

BONUS_FILES = bonus/format_bonus.c\
	bonus/format_functions_bonus.c\
	bonus/input_handling_bonus.c\
	bonus/input_helpers_bonus.c\
	bonus/print_loop_bonus.c

CFILES := format.c\
	input_handling.c\
	input_helpers.c\
	print_loop.c

OBJS := $(CFILES:.c=.o)

BONUS_OBJS := $(BONUS_FILES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -ggdb

LIBFT_DIR = ..

LIBFT_AR := ${LIBFT_DIR}/libft.a

all: ${NAME}

bonus: ${BONUS_OBJS} ${LIBFT_AR}
	cp ${LIBFT_AR} ${NAME}
	ar rs ${NAME} ${BONUS_OBJS}

${NAME}:  ${OBJS} ${LIBFT_AR}
	cp ${LIBFT_AR} ${NAME}
	ar rs ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	${CC} -I${LIBFT_DIR} -c ${CFLAGS} $< -o $@ -fPIE

${LIBFT_AR}:
	cd libft && make bonus

test: bonus test.c
	gcc test.c ${NAME} -o $@
	valgrind ./test
	./test | cat -e

clean:
	rm -f ${OBJS} ${BONUS_OBJS}
	cd libft && make $@

fclean: clean
	rm -f ${NAME}
	cd libft && make fclean

re: fclean all

.PHONY: fclean clean all re bonus
