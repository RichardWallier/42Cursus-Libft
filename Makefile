SRCS	= $(addprefix src/, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_strdup.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memcpy.c ft_strchr.c ft_tolower.c)

OBJS	= ${SRCS:.c=.o}

HEADER	= ./src/libft.h

NAME	= libft.a

CC		= clang
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR_RC 	= ar rc

.c.o:
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR_RC} ${NAME} ${OBJS} 

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re

test:		${NAME} 
	${CC} ${CFLAGS} ./TestCases/main.c libft.a
