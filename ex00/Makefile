# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 13:03:41 by barbizu-          #+#    #+#              #
#    Updated: 2023/02/15 13:03:43 by barbizu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = zombie

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
		${RM} -f ${OBJS}

fclean:	clean
		${RM} -f ${NAME}

re: fclean ${MAKE} ${NAME}

.PHONY: all clean fclean re
