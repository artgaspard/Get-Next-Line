#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/01/12 16:39:09 by agaspard          #+#    #+#             *#
#*   Updated: 2017/02/18 14:39:02 by agaspard         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = get_next_line
# **************************************************************************** #

# COMPILATION
CC = clang
CCFLAGS = -Wall -Werror -Wextra

# DIRECTORIES
D_SRC = src
D_INC = inc
D_OBJ = obj
D_LIB = libft

# LIBRARIES
F_LIB = libft.a
DF_LIB =  $(addprefix $(D_LIB)/, $(F_LIB))
LDFLAGS = $(addprefix -L, $(D_LIB))
LDLIBS = -lft

# SOURCES
F_SRC =\
	get_next_line.c\
	main.c

# ***************************************************************************** #

# SPECIAL CHARS
LOG_CLEAR               = \033[2K
LOG_UP                  = \033[A
LOG_NOCOLOR             = \033[0m
LOG_BLACK               = \033[1;30m
LOG_RED                 = \033[1;31m
LOG_GREEN               = \033[1;32m
LOG_YELLOW              = \033[1;33m
LOG_BLUE                = \033[1;34m
LOG_VIOLET              = \033[1;35m
LOG_CYAN                = \033[1;36m
LOG_WHITE               = \033[1;37m

# ****************************************************************************** #

.PHONY: make all fclean re

F_OBJ = $(addsuffix .o, $(basename $(F_SRC)))
DF_SRC = $(addprefix $(D_SRC)/, $(F_SRC))
DF_OBJ = $(addprefix $(D_OBJ)/, $(F_OBJ))

RM = /bin/rm -rf

all: $(NAME)
$(D_OBJ)/%.o: $(D_SRC)/%.c $(D_INC)
	@mkdir -p $(D_OBJ) 2> /dev/null || true
	@echo "$(LOG_CYAN)$(NAME)... $(LOG_NOCOLOR)$<"
	@$(CC) $(CCFLAGS) -I $(D_INC) -o $@ -c $<

$(NAME): $(DF_OBJ)
	@make -C $(D_LIB)
	@echo "$(LOG_CYAN)$(NAME)... assembling...$(LOG_NOCOLOR)"
	@$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@
	@echo "$(LOG_GREEN)$(NAME)... compiled ✓$(LOG_NOCOLOR)"

clean:
	@echo "$(LOG_RED)Deleting gnl's objs ✖$(LOG_NOCOLOR)"
	@$(RM) $(D_OBJ)

fclean: clean
	@echo "$(LOG_RED)Deleting gnl ✖$(LOG_NOCOLOR)"
	@$(RM) $(NAME)

fcleanlib:
	@make fclean -C libft

re: fclean all

norme:
	@echo "$(LOG_YELLOW)Checking the norme of GNL...\
		$(LOG_WHITE) for each .c$(LOG_NOCOLOR)"
	@norminette $(D_SRC)/
	@echo "\n$(LOG_YELLOW)Checking the norme of GNL...\
		$(LOG_WHITE) for each .h$(LOG_NOCOLOR)"
	@norminette $(D_INC)/

normelib:
	@make norme -C $(D_LIB)

normeall:	
	@echo "$(LOG_YELLOW)Checking the norme of GNL...\
		$(LOG_WHITE) for each .c$(LOG_NOCOLOR)"
	@norminette $(D_SRC)/
	@echo "\n$(LOG_YELLOW)Checking the norme of GNL...\
		$(LOG_WHITE) for each .h$(LOG_NOCOLOR)"
	@norminette $(D_INC)/
	@echo ""
	@make norme -C $(D_LIB)
