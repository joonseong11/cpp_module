NAME		= megaphone

CC			= c++
CXXFLAGS	= -Wall -Wextra -Werror

SRC			 = megaphone.cpp

OBJ			 = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean