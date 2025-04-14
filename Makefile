NAME = libft.a

CFILES := $(wildcard *.c)

OBJS := $(CFILES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:  ${OBJS}
	ar rcs libft.a ${OBJS}

%.o: %.c
	${CC} -c ${CFLAGS} $< -o $@

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: fclean clean all
