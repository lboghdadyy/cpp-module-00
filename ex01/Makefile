CC=c++ -Wall -Wextra -Werror -std=c++98

SRC=Contact.cpp PhoneBook.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

NAME=PhoneBook

RM=rm -rf

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c Makefile
	$(CC) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
 
re : fclean all
