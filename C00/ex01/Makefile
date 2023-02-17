# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 13:46:11 by gscarama          #+#    #+#              #
#    Updated: 2023/02/17 14:42:11 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

SRC =	main.cpp\
		Contact.cpp\
		PhoneBook.cpp\

OBJS = ${SRC:.c=.o}

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

%.o:	%.c
	${CC} ${FLAGS} -c $< -o ${<:%.c=%.o}

$(NAME):	${OBJS}
	$(CC) $(CFLAGS) ${OBJS} -o ${NAME}

all:	$(NAME)

clean:
	${RM} ${NAME}

fclean:	clean

re:	fclean all

.PHONY:	.o all norm clean fclean re