# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:44:09 by sgabsi            #+#    #+#              #
#    Updated: 2023/11/21 12:39:40 by gcaptari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################
##  VARIABLES  ##
#################

# Sources
SRC_DIR		=	./src
SRC			=	ft_atoi.c 		\
				ft_bzero.c		\
				ft_calloc.c		\
				ft_isalnum.c	\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c		\
				ft_strchr.c		\
				ft_strdup.c		\
				ft_strjoin.c	\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_strlen.c		\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_tolower.c	\
				ft_toupper.c	\
				ft_atoi.c		\
				ft_itoa.c		\
				ft_strtrim.c	\
				ft_substr.c		\
				ft_split.c		\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_strmapi.c	\
				ft_striteri.c

SRC_BONUS_DIR		=	$(SRC_DIR)/bonus
SRC_BONUS			=	ft_lstnew_bonus.c		\
						ft_lstadd_front_bonus.c	\
						ft_lstsize_bonus.c		\
						ft_lstlast_bonus.c		\
						ft_lstadd_back_bonus.c	\
						ft_lstdelone_bonus.c	\
						ft_lstclear_bonus.c		\
						ft_lstiter_bonus.c		\
						ft_lstmap_bonus.c

# Objects
OBJDIR		=	obj
OBJ_DIR_BONUS	=	$(OBJDIR)/bonus
OBJ			=	$(SRC:%.c=$(OBJDIR)/%.o)
BOBJ			=	$(SRC_BONUS:%.c=$(OBJDIR)/%.o)

# Includes
INC			=	./includes/

# Output
NAME		=	libft.a

# Compiler
CFLAGS		=	-Wall -Werror -Wextra
CC			=	cc
OPTIONS		=	-I $(INC)

#################
##  TARGETS    ##
#################

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(OPTIONS) -o $@ -c $<

$(OBJDIR)/%.o: $(SRC_BONUS_DIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(OPTIONS) -o $@ -c $<

bonus: $(NAME) $(BOBJ)
	ar -rcs $(NAME) $(BOBJ)

clean:
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus