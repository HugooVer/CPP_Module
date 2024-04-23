NAME = bureaucrat

CXX = c++
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -Werror
CXXFLAGS += -std=c++98

SRCS_PATH = srcs/

SRCS += main.cpp
SRCS += Bureaucrat.cpp
SRCS += AForm.cpp
SRCS += ShrubberyCreationForm.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += PresidentialPardonForm.cpp

vpath %.cpp ${SRCS_PATH}

INCLUDES	= includes/

HEADERS += Bureaucrat.hpp
HEADERS += AForm.hpp
HEADERS += ShrubberyCreationForm.hpp
HEADERS += RobotomyRequestForm.hpp
HEADERS += PresidentialPardonForm.hpp

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
	rm *_shrubbery

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
