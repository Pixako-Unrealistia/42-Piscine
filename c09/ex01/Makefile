# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schongte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 12:44:22 by schongte          #+#    #+#              #
#    Updated: 2022/06/25 13:02:19 by schongte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCESLIST = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SOURCE_DIRECTORY = srcs/

SRCS = ${addprefix ${SOURCE_DIRECTORY}, ${SOURCESLIST}}

OBJS = ${SRCS:.c=.o}

INCDIR = includes/

CC = gcc

RM = rm -f

NAME = libft.a

.c.o:
	${CC} ${CFLAGS} -I${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar crs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
