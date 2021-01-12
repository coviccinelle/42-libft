# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 12:23:32 by thi-phng          #+#    #+#              #
#    Updated: 2021/01/12 14:42:15 by thi-phng         ###   ########.fr        #
#                                                                              #
# *****************************************************************************#

NAME	= 	libft.a

OBJDIR  = 	obj
SRCDIR  = 	source
INCDIR  = 	includes/

MAIN	=	test/main.c
CFLAGS  = 	-Wall -Wextra -Werror

RM	=	rm -rf

SRC	=	ft_substr.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
	   	ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \

.SILENT:

SRCS	= $(SRC:%=$(SRCDIR)/%)
OBJS	= $(SRC:%.c=$(OBJDIR)/%.o)

CRED 	= \033[0;31m
CORANGE	= \033[0;33m
CYELLOW	= \033[1;33m
CGREEN 	= \033[0;32m
CCYAN 	= \033[1;36m
CBLUE 	= \033[0;34m
CPURPLE	= \033[0;35m

all	: $(NAME)

TITLE    : 
	printf "${CRED}  _   ${CORANGE} _     ${CYELLOW}_  ${CGREEN}    ${CCYAN}       ${CBLUE} _     ${CPURPLE}     ${CRED}      \n"
	printf "${CRED} | |_ ${CORANGE}| |_  ${CYELLOW}(_)${CGREEN} ___ ${CCYAN} _ __  ${CBLUE}| |_   ${CPURPLE}_ _  ${CRED} __ _ \n"
	printf "${CRED} |  _|${CORANGE}| ' \\ ${CYELLOW}| |${CGREEN}|___|${CCYAN}| '_ \\ ${CBLUE}| ' \\ ${CPURPLE}| ' \\ ${CRED}/ _\` |\n"
	printf "${CRED}  \__|${CORANGE}|_||_|${CYELLOW}|_|${CGREEN}     ${CCYAN}| .__/ ${CBLUE}|_||_|${CPURPLE}|_||_|${CRED}\\__, |\n"
	printf "${CRED}      ${CORANGE}      ${CYELLOW}   ${CGREEN}     ${CCYAN}|_|     ${CBLUE}     ${CPURPLE}      ${CRED}|___/ \n"

$(NAME)	: clear TITLE fclean
	mkdir $(OBJDIR)
	gcc -c $(CFLAGS) -I $(INCDIR) $(SRCS)
	mv *.o $(OBJDIR)
	ar rs $(NAME) $(OBJS)

test:	clear TITLE mclean 
	gcc $(CFLAGS) -I $(INCDIR) $(SRCS) $(MAIN) -o test.out
	./test.out

clear:
	clear
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

mclean: fclean
	rm -rf test.out

re: fclean $(NAME)

.PHONY: all clean fclean re
