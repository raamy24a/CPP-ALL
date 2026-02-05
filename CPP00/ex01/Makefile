# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: radib <radib@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 21:08:11 by radib             #+#    #+#              #
#    Updated: 2026/02/05 13:30:40 by radib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= myawesomephonebook
SRCS		= ./MyAwesomePhoneBook.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -g -std=c++98
COMPILER	= c++

.cpp.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all clean fclean re .cpp.o