.PHONY:	all clean fclean re

# ******** VARIABLES ******** #

# ---- Final Executable --- #

NAME		=	libft.a

COMP_NAME	= 	output

# ---- Files ---- #

HEAD		=	libft.h 

SRCS_OUTPUT	=	main.c

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
				ft_putnbr_fd.c	\

SRCS_BONUS	=	ft_lstnew_bonus.c			ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c			ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c		ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c			ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c

OBJS		=	${SRCS:%.c=${DIR_OBJS}%.o}

OBJS_BONUS	=	${SRCS_BONUS:%.c=${DIR_OBJS}%.o}

OBJS_OUTPUT	=	${SRCS_OUTPUT:%.c=${DIR_OBJS}%.o}

# ---- Compilation ---- #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

# ---- Commands ---- #

RM		=	rm -rf
MKDIR	=	mkdir -p
AR		=	ar rc

# ********* RULES ******** #

all			:	${NAME}

# ---- Variables Rules ---- #

${NAME}			:	${OBJS} Makefile ${HEAD}
					${AR} ${NAME} ${OBJS}

bonus			:	${OBJS_BONUS} Makefile ${HEAD}
					${AR} ${NAME} ${OBJS_BONUS}

${COMP_NAME}	:	${OBJS} ${OBJS_BONUS} ${OBJS_OUTPUT} Makefile ${HEAD}
					${CC} ${CFLAGS} -I . ${OBJS} ${OBJS_BONUS} ${OBJS_OUTPUT} -o ${COMP_NAME}

# ---- Compiled Rules ---- #

.c.o	:	Makefile ${HEAD}
			${CC} ${CFLAGS} -I . -c $< -o $@

# ---- Usual Commands ---- #

clean			:
					${RM} ${OBJS} ${OBJS_BONUS}

fclean			:	clean
					${RM} ${NAME}

clean_output	:	clean
					${RM} ${OBJS_OUTPUT} text.txt output

re				:	fclean all
