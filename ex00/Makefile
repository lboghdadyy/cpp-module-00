CXX=c++ -Wall -Wextra -Werror -std=c++98

SRC=megaphone.cpp

OBJ=$(SRC:.cpp=.o)

NAME=megaphone

RM=rm -rf

$(NAME) : $(OBJ)
	$(CXX) $< -o $@ 

%.o : %.c Makefile
	$(CXX) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
 
re : fclean all
