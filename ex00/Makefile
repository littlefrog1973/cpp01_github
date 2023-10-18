# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 13:45:55 by sdeeyien          #+#    #+#              #
#    Updated: 2023/10/16 14:35:21 by sdeeyien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
SRCDIR = ./
OBJDIR =
DEPS =

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
BONUS =

OBJ := $(patsubst %.cpp, $(OBJDIR)%.o, $(SRC))
BONUS_OBJ := $(patsubst %.c, $(OBJDIR)%.o, $(BONUS))
SRC := $(addprefix $(SRCDIR), $(SRC))
BONUS := $(addprefix $(SRCDIR), $(BONUS))
DEPS := $(addprefix $(SRCDIR), $(DEPS))

NAME = zombie00
BONUS_NAME =

all : $(NAME) $(BONUS_NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

bonus : $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: $(SRCDIR)%.cpp $(DEPS)
	$(CC) -c $(CFLAGS) $(DEPS) $<

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME) $(BONUS_NAME)

re : fclean all

.PHONY : all clean fclean re bonus
