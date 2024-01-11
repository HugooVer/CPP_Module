NAME = my_sed

CXX = c++
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -Werror
CXXFLAGS += -std=c++98

SRCS_PATH = srcs/

SRCS += main.cpp

vpath %.cpp ${SRCS_PATH}

OBJS_PATH = objs
OBJS = ${patsubst %.cpp, ${OBJS_PATH}/%.o, ${SRCS}}

all: ${NAME}

${NAME}: ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} -r ${OBJS_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
