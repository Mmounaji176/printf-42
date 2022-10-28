# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 19:34:47 by mmounaji          #+#    #+#              #
#    Updated: 2022/10/27 18:04:29 by mmounaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
RM= rm -rf
CFLAGS= -Wall -Wextra -Werror
CC= CC

SRC= ft_put_char  ft_put_str ft_put_unsigned \
	 ft_printf ft_put_nbr ft_put_nbr_base ft_put_ptr\
	 
OBJ= $(SRC:=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJ) 
	ar -rc $(NAME) $(OBJ) 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
