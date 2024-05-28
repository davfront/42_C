# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dapereir <dapereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 09:37:06 by dapereir          #+#    #+#              #
#    Updated: 2022/07/28 13:54:29 by dapereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC_FILES	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC_DIR		= ./srcs/
SRCS		= $(foreach file, ${SRC_FILES}, $(addprefix ${SRC_DIR}, $(file)))

INC_DIR		= ./includes

OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o:
			${CC} ${CFLAGS} -I ${INC_DIR} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
