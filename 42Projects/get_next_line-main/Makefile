# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 23:15:03 by hdeniz            #+#    #+#              #
#    Updated: 2022/12/23 16:02:58 by hdeniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	get_next_line.a
B_NAME		=	get_next_line_bonus.a
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
SRC			=	get_next_line.c get_next_line_utils.c
B_SRC		=	get_next_line_bonus.c get_next_line_utils_bonus.c
B_OBJ		=	$(B_SRC:.c=.o)
OBJ			=	$(SRC:.c=.o)
FILES_N		:=	0
N_FILES		:=	0

define progress_bar
	$(eval PBAR := $(shell echo $(1)*100/$(2)*100/100 | bc))
	$(eval PDONE := $(shell echo $(PBAR)*4/10 | bc))
	$(eval PLEFT := $(shell echo 40-$(PDONE) | bc))
	$(eval PSEQ := $(shell seq 0 1 $(PLEFT) 2>/dev/null))
	$(eval PEMPTY := $(shell if [ "$(1)" -ne "$(2)" ]; then printf "░%.0s" $(PSEQ); fi))
	$(eval PFILL := $(shell printf "█%.0s" $(shell seq 1 $(PDONE))))
	@printf "\r $(shell tput setaf 11)[$(shell tput setaf 14)$(PFILL)$(PEMPTY)$(shell tput setaf 11)] $(PBAR)%% - $(shell tput setaf 10)[$(1)/$(2)]$(shell tput setaf 11) [$(shell tput setaf 13)$(3)$(shell tput setaf 11)]   "
endef

a: all
all: norminette $(NAME) bonus

%.o: %.c
	$(eval FILES_N := $(shell echo $(FILES_N)+1 | bc))
	$(call progress_bar,$(FILES_N),$(N_FILES),$<)
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): files_n_calculator $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo " $(shell tput setab 2)$(shell tput setaf 15)$(NAME) Done !$(shell tput sgr0)"
	@echo ""

b: bonus
$(B_NAME): bonus
bonus: files_bonus_n_calculator $(B_OBJ)
	@ar -rcs $(B_NAME) $(B_OBJ)
	@echo " $(shell tput setab 2)$(shell tput setaf 15)$(shell tput smul)$(B_NAME)$(shell tput rmul) Done !$(shell tput sgr0)"	
	@echo ""

c: clean
clear: clean
clean:
	@rm -f $(OBJ) $(B_OBJ)
	@echo ""
	@echo " $(shell tput setaf 15)$(shell tput setab 1)Clearing Objective Files$(shell tput sgr0)"
	@echo ""

fc: fclean
fclear: fclean
fclean: clean
	@rm -f $(B_NAME)
	@rm -f $(NAME)
	@echo ""
	@echo " $(shell tput setab 1)$(shell tput setaf 11)$(NAME)$(shell tput setaf 15) and objective files are deleted$(shell tput sgr0)"
	@echo ""

n: norminette
norm: norminette
norminette:
	@echo ""
	@echo " $(shell tput setab 10)$(shell tput setaf 0) Checking Norminette Rules $(shell tput sgr0)"
	@norminette $(SRC) $(B_SRC) | grep ': OK!' -v || printf '\n$(tput setab 10)$(tput setaf 15) Scripts OK! $(shell tput sgr0)\n'
	@echo ""
	@echo " $(shell tput setab 11)$(shell tput setaf 0) Checking Header Norminette Rules $(shell tput sgr0)"
	@norminette -R CheckDefine *.h | grep ': OK!' -v || printf '\n$(tput setab 10)$(tput setaf 15) Headers OK! $(shell tput sgr0)\n'

files_n_calculator:
	@echo "$(shell tput sgr0)"
	@echo ""
	$(eval FILES_N := 0)
	$(eval N_FILES := $(shell echo $(SRC) | wc -w | sed "s/ //g" | bc))

files_bonus_n_calculator:
	@echo "$(shell tput sgr0)"
	@echo ""
	$(eval FILES_N := 0)
	$(eval N_FILES := $(shell echo $(B_SRC) | wc -w | sed "s/ //g" | bc))

re: fclean all

.PHONY: all a bonus b clean clear c fclean fclear fc re norminette norm n
