# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 14:30:10 by gscarama          #+#    #+#              #
#    Updated: 2023/09/06 16:23:59 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

SRC = main.cpp\
		Span.cpp

OBJS = ${SRC:.c=.o}

CC = c++
RM = rm -rf
FLAGS = 

%.o:	%.c
	${CC} ${FLAGS} -c $< -o ${<:%.c=%.o}

$(NAME):	${OBJS}
	$(CC) $(FLAGS) ${OBJS} -o ${NAME}

all:	$(NAME)

clean:
	${RM} ${NAME}

fclean:	clean

re:	fclean all

.PHONY:	.o all norm clean fclean re
