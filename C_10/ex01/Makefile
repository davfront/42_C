# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dapereir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 16:52:49 by dapereir          #+#    #+#              #
#    Updated: 2022/07/22 10:27:18 by dapereir         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= ft_cat

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

SRCS		= ft_cat.c utils-str.c

OBJS		= ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
