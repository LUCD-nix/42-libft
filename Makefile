NAME = libft.a

CFILES := $(wildcard **/*.c)

OBJS := $(CFILES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEAD = includes/

all: ${NAME}

${NAME}:  ${OBJS}
	ar rcs libft.a ${OBJS}

$(SRCDIR)%.o: ${SRCDIR}%.c
	${CC} -c ${CFLAGS} -I${HEAD} $< -o $@

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: fclean clean all
