# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 12:31:16 by gscarama          #+#    #+#              #
#    Updated: 2023/03/24 14:55:41 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimals

SRC =	main.cpp\
		AAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJS = ${SRC:.c=.o}

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

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
