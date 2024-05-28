SRCS="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJS=${SRCS//.c/.o}
NAME=libft.a

gcc -c ${SRCS}
ar rc ${NAME} ${OBJS}
ranlib ${NAME}
rm -f ${OBJS}
