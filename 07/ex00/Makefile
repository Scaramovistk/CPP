# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 13:59:43 by gscarama          #+#    #+#              #
#    Updated: 2023/08/29 14:47:50 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = file

SRC = main.cpp\

OBJS = ${SRC:.c=.o}

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

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