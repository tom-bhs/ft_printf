NAME = ft_printf.a

SRCS = ft_printf.c

AR = ar rcs

OBJS =	${SRCS:.c=.o}

BONUSOBJS	= ${BONUS:.c=.o}

CC =	cc

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