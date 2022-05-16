SRCS	= $(addprefix src/, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_strdup.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memcpy.c ft_strchr.c ft_tolower.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_putendl_fd.c)

OBJS	= ${SRCS:.c=.o}

HEADER	= ./src/libft.h

NAME	= libft.a

CC		= clang
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR_RC 	= ar rc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR_RC} ${NAME} ${OBJS} 

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
