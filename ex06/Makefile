# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 12:55:26 by mriant            #+#    #+#              #
#    Updated: 2022/10/21 17:25:11 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

SRCS = ${addprefix srcs/, \
	Harl.cpp \
	main.cpp}

OBJS = ${SRCS:srcs/%.cpp=build/%.o}
DEPS = ${SRCS:srcs/%.cpp=build/%.d}

CC = clang++
CFLAGS = -Wextra -Wall -Werror -g -std=c++98
IFLAGS = -MMD -I./includes
LFLAGS = 

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME} ${LFLAGS}

build/%.o: srcs/%.cpp
	mkdir -p build
	${CC} ${CFLAGS} -c $< -o $@ ${IFLAGS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf ${NAME}

.PHONY: re
re: fclean
	make -C .

.PHONY: test
test: ${NAME}
	./test/test.sh


-include ${DEPS}