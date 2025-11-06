SRC=main.cpp PhoneBook.cpp Contact.cpp

CXX=c++ -Wall -Werror -Wextra -std=c++98

NAME=PhoneBook

RM=rm -rf

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o : %.cpp PhoneBook.hpp
	$(CXX) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all