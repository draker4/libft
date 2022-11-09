.PHONY:	all clean fclean re

# ******** VARIABLES ******** #

# ---- Final Executable --- #

NAME	=	output

# ---- Files ---- #

HEAD	=	libft.h 

SRCS	=	ft_isalpha.c	ft_isdigit.c	\
			ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_strlen.c		\
			ft_memset.c		ft_bzero.c		\
			ft_memcpy.c		ft_strlcpy.c	\
			ft_strlcat.c	ft_toupper.c	\
			ft_tolower.c	ft_strchr.c		\
			ft_strrchr.c	ft_strncmp.c	\
			ft_memchr.c		ft_memcmp.c		\
			ft_memmove.c	ft_strnstr.c	\
			ft_atoi.c		ft_strdup.c		\
			ft_substr.c		ft_strjoin.c	\
			ft_strtrim.c	ft_split.c		\
			ft_itoa.c		main.c

OBJS	=	${SRCS:%.c=%.o}

# ---- Compilation ---- #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

# ---- Commands ---- #

RM		=	rm -rf
MKDIR	=	mkdir -p

# ********* RULES ******** #

all			:	${NAME}

# ---- Variables Rules ---- #

${NAME}		:	${OBJS} Makefile ${HEAD}
				${CC} ${CFLAGS} -I . ${OBJS} -o ${NAME}

# ---- Compiled Rules ---- #

.c.o		:	Makefile ${HEAD}
				${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

# ---- Usual Commands ---- #

clean		:
				${RM} ${OBJS}

fclean		:	clean
				${RM} ${NAME}

re			:	fclean all