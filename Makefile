CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c

OFILES = $(SRCS:.c=.o)
BOFILES = $(BSRCS:.c=.o)

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

all : $(NAME)
# %.o: %.c
# 	$(CC) -c $(CFLAGS) $< -o $@
# 	ar rcs $(NAME) $@

clean:
	rm -rf  $(OFILES) $(BOFILES) .bonus_flag

fclean:	clean
	rm -rf $(NAME) .bonus_flag

re:	fclean all

# bonus: $(BOFILES)
bonus: $(BOFILES) .bonus_flag

.bonus_flag:
	ar rcs $(NAME) $(BOFILES)
	@touch .bonus_flag

.PHONY: clean