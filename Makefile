NAME = minitalk
SNAME = server
CC = gcc
FLAGS = -Wall -Wextra -Werror
INC = ft_mini_talk.h
CLIENTFILES = clt/ft_client.c
SERVERFILES = srv/ft_server.c
TOOLSFILES =  mini_talk_utils/ft_atoi.c mini_talk_utils/ft_putstr.c \
mini_talk_utils/ft_putchar.c mini_talk_utils/ft_send_bin.c mini_talk_utils/ft_putnbr.c


OCLIENTFILES = ${CLIENTFILES:.c=.o}
OTOOLSFILES = ${TOOLSFILES:.c=.o}
OSERVERFILES = ${SERVERFILES:.c=.o}


all : client server

$(NAME) = all

client : $(OTOOLSFILES) $(OCLIENTFILES)
	@ echo "Compiling Client...."
	@$(CC) $(FLAGS) $(OCLIENTFILES) $(OTOOLSFILES) -o client
server : $(OTOOLSFILES) $(OSERVERFILES)
	@ echo "Compiling Server...."
	@$(CC) $(FLAGS) $(OSERVERFILES) $(OTOOLSFILES) -o server
bonus : all
	@ echo "Compiling Bonus...."
clean :
	@ echo "Cleaning..."
	@ rm -rf $(OTOOLSFILES)
	@ rm -rf $(OCLIENTFILES)
	@ rm -rf $(OSERVERFILES)
fclean : clean
	@ echo "Cleaning all..."
	@ rm -rf client
	@ rm -rf server
re : fclean all
.PHONY : all clean fclean re bonus client server
