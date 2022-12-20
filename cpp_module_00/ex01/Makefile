NAME	= megaphone

CC		= c++
CFLAGS	= -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean