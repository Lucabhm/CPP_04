NAME = animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
VPATH = src
SRCS = main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp
OBJSDIR = objs/
OBJS = $(addprefix $(OBJSDIR), $(SRCS:.cpp=.o))

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJSDIR)%.o:	%.cpp
				@mkdir -p $(dir $@)
				$(CC) -c $< -o $@

all:			$(NAME)

clean:
				rm -rf $(OBJSDIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re