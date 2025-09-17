CC=g++ -Wall -Wextra -Werror -std=c++98

SRC=megaphone.cpp

OBJ=$(SRC:.cpp=.o)

NAME=megaphone

RM=rm -rf

$(NAME) : $(OBJ)
	$(CC) $< -o $@

%.o : %.c Makefile
	$(CC) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
