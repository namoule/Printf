# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jealefev <jealefev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:59:04 by jealefev          #+#    #+#              #
#    Updated: 2023/11/29 10:59:05 by jealefev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = ft_tools.c ft_putnbr.c ft_charstr.c
OBJECTS = ${SOURCES:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I ./

$(NAME): $(OBJECTS)
	ar	-rc	$(NAME)	$(OBJECTS)
	
clean:	
	rm -rf $(OBJECTS)
fclean:
	rm -rf	$(NAME)	$(OBJECTS)
re:
	rm -rf all

.PHONY: all re fclean clean
