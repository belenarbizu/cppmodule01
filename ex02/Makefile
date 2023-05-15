SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = brain

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