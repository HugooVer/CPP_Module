NAME = btc

CXX = c++
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -Werror
CXXFLAGS += -std=c++98

SRCS_PATH = srcs/

SRCS += main.cpp
SRCS += BitcoinExchange.cpp

vpath %.cpp ${SRCS_PATH}

INCLUDES	= includes/

HEADERS += BitcoinExchange.hpp

vpath %.hpp ${INCLUDES}

OBJS_PATH = objs
OBJS = ${patsubst %.cpp, ${OBJS_PATH}/%.o, ${SRCS}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

${OBJS}: ${OBJS_PATH}/%.o: %.cpp Makefile ${INCLUDES}
	mkdir -p ${OBJS_PATH}
	${CXX} ${CXXFLAGS} -c $< -o $@ -I ${INCLUDES}

clean:
	${RM} -r ${OBJS_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
