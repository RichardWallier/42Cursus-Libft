SOURCES	=	ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_calloc.c ft_strjoin.c

OBJECTS	=	${SOURCES:.c=.o}

NAME	=	libft.a

CC	=	gcc

AR_RC	=	ar rc

CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -f

${NAME}:	${OBJECTS}
		${AR_RC} ${NAME} ${OBJECTS}

.c.o:	
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

clean:
		${RM} ${OBJECTS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean
