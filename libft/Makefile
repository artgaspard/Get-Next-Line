# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaspard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 14:33:41 by agaspard          #+#    #+#              #
#*   Updated: 2017/01/12 16:43:32 by agaspard         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

.PHONY: clean $(NAME) re fclean all
.SILENT:

NAME = libft.a

# COMPILATION

CC = gcc
FLAGS = -Wall -Wextra -Werror

# DIRECTORIES

SRCDIR = src
INCDIR = includes
OBJDIR = obj

# SOURCES

SRC =\
		arrays/ft_arraylen.c \
		numbers/ft_atoi.c \
		memory/ft_bzero.c \
		chars/ft_isalnum.c \
		chars/ft_isalpha.c \
		chars/ft_isascii.c \
		chars/ft_isdigit.c \
		chars/ft_isprint.c \
		numbers/ft_itoa.c \
		lst/ft_lstadd.c \
		lst/ft_lstdel.c \
		lst/ft_lstdelone.c \
		lst/ft_lstiter.c \
		lst/ft_lstmap.c \
		lst/ft_lstnew.c \
		memory/ft_memalloc.c \
		memory/ft_memccpy.c \
		memory/ft_memchr.c \
		memory/ft_memcmp.c \
		memory/ft_memcpy.c \
		memory/ft_memdel.c \
		memory/ft_memmove.c \
		memory/ft_memset.c \
		chars/ft_putchar.c \
		chars/ft_putchar_fd.c \
		strings/ft_putendl.c \
		strings/ft_putendl_fd.c \
		numbers/ft_putnbr.c \
		numbers/ft_putnbr_fd.c \
		strings/ft_putstr.c \
		strings/ft_putstr_fd.c \
		strings/ft_strcat.c \
		strings/ft_strchr.c \
		strings/ft_strclr.c \
		strings/ft_strcmp.c \
		strings/ft_strcpy.c \
		strings/ft_strdel.c \
		strings/ft_strdup.c \
		strings/ft_strequ.c \
		strings/ft_striter.c \
		strings/ft_striteri.c \
		strings/ft_strjoin.c \
		strings/ft_strlcat.c \
		strings/ft_strlen.c \
		strings/ft_strmap.c \
		strings/ft_strmapi.c \
		strings/ft_strncat.c \
		strings/ft_strncmp.c \
		strings/ft_strncpy.c \
		strings/ft_strndup.c \
		strings/ft_strnequ.c \
		strings/ft_strnew.c \
		strings/ft_strnstr.c \
		strings/ft_strrchr.c \
		strings/ft_strsplit.c \
		strings/ft_strstr.c \
		strings/ft_strsub.c \
		strings/ft_strtrim.c \
		chars/ft_tolower.c \
		chars/ft_toupper.c

# **************************************************************************** #

# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)

$(NAME): build $(LIBS) $(OBJS)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_CYAN)assembling...$(LOG_NOCOLOR)$(LOG_UP)"
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_GREEN)compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(LIBS)
	rm -Rf $(OBJS_DIRS)
	rm -Rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(FLAGS)
