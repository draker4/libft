.PHONY:	all clean fclean re

# ******** VARIABLES ******** #

# ---- Final Executable --- #

NAME	=	output

# ---- Files ---- #

HEAD		=	libft.h 

SRCS		=	ft_isalpha.c	ft_isdigit.c	\
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
				ft_itoa.c		ft_strmapi.c	\
				ft_striteri.c	ft_putchar_fd.c	\
				ft_putstr_fd.c	ft_putendl_fd.c	\
				ft_putnbr_fd.c	main.c			\

SRCS_BONUS	=	ft_lstnew_bonus.c			ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c			ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c		ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c

OBJS		=	${SRCS:%.c=%.o}

OBJS_BONUS	=	${SRCS_BONUS:%.c=%.o}

# ---- Compilation ---- #

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

# ---- Commands ---- #

RM		=	rm -rf
MKDIR	=	mkdir -p

# ********* RULES ******** #

all			:	${NAME}

# ---- Variables Rules ---- #

${NAME}		:	${OBJS} ${OBJS_BONUS} Makefile ${HEAD}
				${CC} ${CFLAGS} -I . ${OBJS} ${OBJS_BONUS} -o ${NAME}

# ---- Compiled Rules ---- #

.c.o		:	Makefile ${HEAD}
				${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

# ---- Usual Commands ---- #

clean		:
				${RM} ${OBJS} ${OBJS_BONUS} text.txt

fclean		:	clean
				${RM} ${NAME}

re			:	fclean all
