# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 16:06:06 by mriant            #+#    #+#              #
#    Updated: 2022/09/23 17:01:58 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

SRCS = ${addprefix srcs/, \
	HumanA.cpp \
	HumanB.cpp \
	main.cpp \
	Weapon.cpp}

OBJS = ${SRCS:srcs/%.cpp=build/%.o}
DEPS = ${SRCS:srcs/%.cpp=build/%.d}

CC = c++
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

-include ${DEPS}