# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 15:12:16 by gscarama          #+#    #+#              #
#    Updated: 2023/09/13 15:12:32 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

SRC = main.cpp\
		RPN.cpp

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
