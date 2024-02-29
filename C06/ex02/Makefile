# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:17:36 by gscarama          #+#    #+#              #
#    Updated: 2023/08/28 16:13:06 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BaseClass

SRC = main.cpp\
	Base.cpp\

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