NAME = minishell
CFLAGS = -Wall -Wextra -Werror
OBJS = minishell.o


all: $(NAME)
.PHONY: all

$(NAME): $(OBJS)
	$(CC) -o $@ $(LDFLAGS) $^


.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean
	$(MAKE) all
