CXX=c++ -std=c++98

NAME=Bank

RM=rm -rf

SRC=Account.cpp tests.cpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX)	$(OBJ) -o $@

%.o : %.cpp Account.hpp
	$(CXX) $< -c -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)