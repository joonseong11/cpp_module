NAME	= weapon

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re