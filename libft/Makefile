# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aslusarc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 12:19:22 by aslusarc          #+#    #+#              #
#    Updated: 2018/03/03 19:52:17 by aslusarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FLAG = -I includes

SRCS = ft_absval.c ft_memdel.c ft_strchr.c ft_strncmp.c \
	ft_atoi.c ft_memmove.c ft_strclr.c	ft_strncpy.c \
	ft_bzero.c	ft_memset.c	ft_strcmp.c ft_strnequ.c \
	ft_isalnum.c ft_min.c ft_strcpy.c ft_strnew.c \
	ft_isalpha.c ft_putchar.c ft_strdel.c ft_strrchr.c \
	ft_isascii.c ft_putchar_fd.c ft_strdup.c ft_strsplit.c \
	ft_isdigit.c ft_putendl.c ft_strequ.c ft_strstr.c \
	ft_isprint.c ft_putendl_fd.c ft_striter.c ft_strsub.c \
	ft_itoa.c ft_putnbr.c ft_striteri.c ft_strtrim.c \
	ft_max.c ft_putnbr_fd.c ft_strjoin.c ft_swap.c \
	ft_memalloc.c ft_putstr.c ft_strlcat.c ft_tolower.c \
	ft_memccpy.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
	ft_memchr.c	ft_size_integer.c ft_strmap.c ft_wordcopy.c \
	ft_memcmp.c	ft_space.c ft_strmapi.c ft_wordcount.c \
	ft_memcpy.c	ft_strcat.c ft_strncat.c ft_strnstr.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstrev.c \
	ft_lstcount.c ft_lstfind.c ft_lstremove.c 

FILES_O = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(FILES_O)
	ar rc  $(NAME) $(FILES_O)
	ranlib $(NAME)

$(FILES_O): %.o:%.c
	gcc $(FLAGS) $(FLAG) $(SRCS) -c $<

clean:
	rm -f $(FILES_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
