SRCS = main.cpp Harl.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = harlFilter

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean ${MAKE} ${NAME}

.PHONY: all clean fclean re