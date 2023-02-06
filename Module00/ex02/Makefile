NAME	= The_Job_Of_Your_Dreams
CC		= g++
# -pedantic yazılan kodun standartlara uygun olup olmadığını kontrol eder.
# Uygun olmadığı durumlarda hata mesajı vererek derleme işlemini durdurur.
# Burada -std=c++98 -pedantic yazıldığı için C++98 standartlarına uygun olması gerekiyor.
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	= $(wildcard *.cpp)

OBJDIR	= obj
OBJS	= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re