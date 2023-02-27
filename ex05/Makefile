SRCS = main.cpp Harl.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
		${RM} -f ${OBJS}

fclean: clean
		${RM} -f ${NAME}

re: fclean ${MAKE} ${NAME}

.PHONY: all clean fclean re