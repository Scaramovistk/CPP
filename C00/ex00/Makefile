# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 16:46:11 by gscarama          #+#    #+#              #
#    Updated: 2023/02/04 15:20:24 by gscarama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= megaphone.cpp

OBJ	= ${SRCS:.c=.o}

CC	= c++
RM	= rm -rf
FLAGS	= -Wall -Wextra -Werror

%.o:	%.c
	${CC} ${FLAGS} -c $< -o ${<:%.c=%.o}

all:	$(NAME)

clean:
	${RM} ${NAME}

fclean:	clean

re:	fclean all

.PHONY: .o all norm clean fclean re
