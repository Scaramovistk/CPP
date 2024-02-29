# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 14:30:34 by gscarama          #+#    #+#              #
#    Updated: 2023/09/14 15:43:33 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC = main.cpp\
		PmergeMe.cpp

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
