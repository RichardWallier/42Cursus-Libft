SOURCES			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
SOURCES			+=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
SOURCES			+=	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SOURCES			+=	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c
SOURCES			+=	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c
SOURCES			+=	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c
SOURCES			+=	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c
SOURCES			+=	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
SOURCES			+=	ft_tolower.c ft_toupper.c

OBJECTS	=	$(SOURCES:.c=.o)

BONUS_SOURCES	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 
BONUS_SOURCES	+=	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c 
BONUS_SOURCES	+=	ft_lstmap.c

BONUS_OBJECTS	=	$(BONUS_SOURCES:.c=.o)

NAME	=	libft.a

CC	=	cc

AR_RC	=	ar rc

CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -f

$(NAME):	$(OBJECTS)
		$(AR_RC) $(NAME) $(OBJECTS)

.c.o:	
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

bonus:	$(BONUS_OBJECTS)
	$(AR_RC) $(NAME) $(BONUS_OBJECTS)

clean:
		$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
