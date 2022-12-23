NAME	= brainz

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re