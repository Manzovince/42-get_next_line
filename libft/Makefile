# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 14:45:27 by vmanzoni          #+#    #+#              #
#    Updated: 2019/04/05 21:34:17 by vmanzoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	includes/libft.h

SRC_DIR	=	srcs

SRC		=	ft_conv/ft_abs.c\
			ft_conv/ft_atoi.c\
			ft_conv/ft_itoa.c\
			ft_conv/ft_tolower.c\
			ft_conv/ft_toupper.c\
			ft_id/ft_isalnum.c\
			ft_id/ft_isalpha.c\
			ft_id/ft_isascii.c\
			ft_id/ft_isdigit.c\
			ft_id/ft_islower.c\
			ft_id/ft_isprint.c\
			ft_id/ft_isspace.c\
			ft_id/ft_isupper.c\
			ft_lst/ft_lstadd.c\
			ft_lst/ft_lstappend.c\
			ft_lst/ft_lstdel.c\
			ft_lst/ft_lstdelone.c\
			ft_lst/ft_lstiter.c\
			ft_lst/ft_lstmap.c\
			ft_lst/ft_lstnew.c\
			ft_mem/ft_bzero.c\
			ft_mem/ft_intnew.c\
			ft_mem/ft_memalloc.c\
			ft_mem/ft_memccpy.c\
			ft_mem/ft_memchr.c\
			ft_mem/ft_memcmp.c\
			ft_mem/ft_memcpy.c\
			ft_mem/ft_memdel.c\
			ft_mem/ft_memmove.c\
			ft_mem/ft_memset.c\
			ft_mem/ft_memswap.c\
			ft_print/ft_putchar.c\
			ft_print/ft_putchar_fd.c\
			ft_print/ft_putendl.c\
			ft_print/ft_putendl_fd.c\
			ft_print/ft_putnbr.c\
			ft_print/ft_putnbr_fd.c\
			ft_print/ft_putstr.c\
			ft_print/ft_putstr_fd.c\
			ft_sort/ft_bubblesort_array.c\
			ft_sort/ft_clamp.c\
			ft_sort/ft_swap.c\
			ft_str/ft_count_words.c\
			ft_str/ft_nbrlen.c\
			ft_str/ft_stralloc.c\
			ft_str/ft_strcat.c\
			ft_str/ft_strchr.c\
			ft_str/ft_strclr.c\
			ft_str/ft_strcmp.c\
			ft_str/ft_strcpy.c\
			ft_str/ft_strctrim.c\
			ft_str/ft_strdel.c\
			ft_str/ft_strdup.c\
			ft_str/ft_strdup_free.c\
			ft_str/ft_strequ.c\
			ft_str/ft_striter.c\
			ft_str/ft_striteri.c\
			ft_str/ft_strjoin.c\
			ft_str/ft_strjoin_free.c\
			ft_str/ft_strlcat.c\
			ft_str/ft_strlen.c\
			ft_str/ft_strmap.c\
			ft_str/ft_strmapi.c\
			ft_str/ft_strncat.c\
			ft_str/ft_strncmp.c\
			ft_str/ft_strncpy.c\
			ft_str/ft_strndup.c\
			ft_str/ft_strnequ.c\
			ft_str/ft_strnew.c\
			ft_str/ft_strnjoin.c\
			ft_str/ft_strnjoin_free.c\
			ft_str/ft_strnstr.c\
			ft_str/ft_strrchr.c\
			ft_str/ft_strsplit.c\
			ft_str/ft_strstr.c\
			ft_str/ft_strsub.c\
			ft_str/ft_strtrim.c\
			ft_str/ft_wordlen.c

OBJ		=	*.o

OBJ_DIR	=	ft_obj

CC		=	gcc

FLAGS	=	-I. -c

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

all: 		$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(addprefix $(SRC_DIR)/, $(SRC))
	mkdir $(OBJ_DIR)
	mv *.o $(OBJ_DIR)
	ar rc $(NAME) $(addprefix $(OBJ_DIR)/, $(OBJ))
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all
