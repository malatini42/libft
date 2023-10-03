SRCS =		./libft/ft_atoi.c \
			./libft/ft_isalpha.c \
			./libft/ft_itoa.c \
			./libft/ft_memcpy.c \
			./libft/ft_putendl_fd.c \
			./libft/ft_strchr.c \
			./libft/ft_strlcpy.c \
			./libft/ft_strnstr.c \
			./libft/ft_tolower.c \
			./libft/ft_bzero.c \
			./libft/ft_isascii.c \
			./libft/ft_memccpy.c \
			./libft/ft_memmove.c \
			./libft/ft_putnbr_fd.c \
			./libft/ft_strdup.c \
			./libft/ft_strlen.c \
			./libft/ft_strrchr.c \
			./libft/ft_toupper.c \
			./libft/ft_calloc.c \
			./libft/ft_isdigit.c \
			./libft/ft_memchr.c \
			./libft/ft_memset.c \
			./libft/ft_putstr_fd.c \
			./libft/ft_strjoin.c \
			./libft/ft_strmapi.c \
			./libft/ft_strtrim.c \
			./libft/ft_isalnum.c \
			./libft/ft_isprint.c \
			./libft/ft_memcmp.c \
			./libft/ft_putchar_fd.c \
			./libft/ft_split.c \
			./libft/ft_strlcat.c \
			./libft/ft_strncmp.c \
			./libft/ft_substr.c

OBJS =		${SRCS:.c=.o}

SRCSBONUS =	./libft/bonus/ft_lstnew.c \
			./libft/bonus/ft_lstadd_front.c \
			./libft/bonus/ft_lstsize.c \
			./libft/bonus/ft_lstlast.c \
			./libft/bonus/ft_lstadd_back.c \
			./libft/bonus/ft_lstdelone.c \
			./libft/bonus/ft_lstclear.c \
			./libft/bonus/ft_lstiter.c \
			./libft/bonus/ft_lstmap.c

OBJSBONUS =	${SRCSBONUS:.c=.o}

NAME =		libft.a
CC =		gcc
CFLAGS =	-Wall -Wextra -Werror -g3
RM =		rm -f

all: 		${NAME}

$(NAME):	$(OBJS)
			ar -rc $(NAME) $(OBJS)

bonus:		${OBJS} ${OBJSBONUS}
			ar -rc ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		bonus all clean fclean re
