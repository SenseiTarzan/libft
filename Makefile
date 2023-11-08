# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 11:12:50 by gcaptari          #+#    #+#              #
#    Updated: 2023/11/08 14:49:50 by gcaptari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#################
##  VARIABLE   ##
#################

SRC_DIR= ./src
SRC =					\
	ft_atoi.c			\
	ft_bzero.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c			\
	ft_strchr.c			\
	ft_strlcat.c		\
	ft_strlcpy.c		\
	ft_strlen.c			\
	ft_strncmp.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_tolower.c		\
	ft_toupper.c

OBJECT_DIR = obj
OBJECT = $(SRC:%.c=$(OBJECT_DIR)/%.o)

INCLUDE = libft.h
CC= cc
CFLAGs= -Werror -Wextra -Wall
OPTION= -I $(INCLUDE)

NAME=libft.a

#################
##  TARGETS    ##
#################

all: $(NAME)

$(NAME): $(OBJ)
    ar rc $(NAME) $(OBJ)
    ranlib $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
    mkdir -p $(OBJDIR)
    $(CC) $(CFLAGS) $(OPTIONS) -o $@ -c $<

clean:
    /bin/rm -rf $(OBJDIR)

fclean: clean
    /bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re