# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afatir <afatir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 18:13:38 by afatir            #+#    #+#              #
#    Updated: 2023/03/02 14:08:37 by afatir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
BNAME	= checker
LIB_FT	= ./libft_gcl_ptf/
LIB_FT_A= ./libft_gcl_ptf/libft_gcl_ptf.a
CFLAGS	= -Wall -Werror -Wextra
CC		= cc
MOBJS	= ${SRCS:%.c=%.o}
BOBJS	= ${SRCS_B:%.c=%.o}
SRCS	= src/push_swap.c src/atoi_pro.c src/linked_list.c src/fill_index.c src/instuctions.c src/pos.c src/sort_s.c
SRCS_B	= bonus/checker.c bonus/atoi_pro_b.c bonus/linked_list_b.c bonus/fill_index_b.c bonus/instuctions_b.c bonus/pos_b.c


all :		$(NAME)
			@make -C $(LIB_FT)

$(NAME) :	$(MOBJS)
			@make -C $(LIB_FT)
			@$(CC) $(CFLAGS) $(LIB_FT_A) $(MOBJS) -o $(NAME)

bonus:		$(BNAME)
			@make -C $(LIB_FT)

$(BNAME):	$(BOBJS)
			@make -C $(LIB_FT)
			@$(CC) $(CFLAGS) $(LIB_FT_A) $(BOBJS) -o $(BNAME)

%.o:	%.c	push_swap.h bonus/push_swap_bonus.h
			$(CC) $(CFLAGS)  -c $< -o $@

clean:
			@make clean -s -C $(LIB_FT)
			@rm -f $(MOBJS) $(BOBJS)

fclean: 	clean
			@make fclean -s -C $(LIB_FT)
			@rm -f $(NAME) $(BNAME)

re: 		fclean all