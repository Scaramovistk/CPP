# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 12:30:11 by gscarama          #+#    #+#              #
#    Updated: 2023/08/21 13:51:25 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Formulary

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp

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