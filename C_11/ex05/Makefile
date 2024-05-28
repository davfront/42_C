# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dapereir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 11:35:46 by dapereir          #+#    #+#              #
#    Updated: 2022/07/21 11:46:42 by dapereir         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

SRCS	= do-op.c utils-str.c utils-op.c

OBJS	= ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

