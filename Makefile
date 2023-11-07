NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_printf_function.c

AR = ar rcs

OBJS =	${SRCS:.c=.o}

CC =	gcc

CFLAGS	=	-Wall -Wextra -Werror 

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJS}
		$(AR) $(NAME) ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS} ${BONUSOBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all


.PHONY: all clean fclean re