# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/27 15:25:49 by pmeei-we          #+#    #+#              #
#    Updated: 2026/08/27 15:40:23 by pmeei-we         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC = cc
CFLAGS	= -Wall -Wextra -Werror

AR = ar rcs
RM = rm -fclean

SRCS	=

OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	&(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) &(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
