# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afatir <afatir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 18:13:38 by afatir            #+#    #+#              #
#    Updated: 2023/02/24 11:37:12 by afatir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
BNAME	= cheker
LIB_FT	= ./libft_gcl_ptf/
LIB_FT_A= ./libft_gcl_ptf/libft_gcl_ptf.a
CFLAGS	= -Wall -Werror -Wextra
CC		= cc
MOBJS	= ${SRCS:%.c=object/%.o}
BOBJS	= ${SRCS_B:%.c=object/%.o}
SRCS	= push_swap.c check1.c linked_list.c fill_index.c instuctions.c pos.c
SRCS_B	= bonus/checker.c bonus/check1_b.c bonus/linked_list_b.c bonus/fill_index_b.c bonus/instuctions_b.c


all :		$(NAME)
			@make -C $(LIB_FT)

$(NAME) :	$(MOBJS)
			@make -s -C $(LIB_FT)
			@$(CC) $(CFLAGS) $(LIB_FT_A) $(MOBJS) -o $(NAME)

bonus:		$(BNAME)
			@make -C $(LIB_FT)

$(BNAME):	$(BOBJS)
			@make -s -C $(LIB_FT)
			@$(CC) $(CFLAGS) $(LIB_FT_A) $(BOBJS) -o $(BNAME)

object/%.o:	%.c	push_swap.h
			@$(CC) $(CFLAGS)  -c $< -o $@

object/%.o: %.c	bonus/push_swap_bonus.h
			@$(CC) $(CFLAGS)  -c $< -o $@

clean:
			@make clean -s -C $(LIB_FT)
			@rm -f $(MOBJS) $(BOBJS)

fclean: 	clean
			@make fclean -s -C $(LIB_FT)
			@rm -f $(NAME) $(BNAME)

re: 		fclean all