NAME = minitalk
SNAME = server
CC = gcc
FLAGS = -Wall -Wextra -Werror

INC = ft_mini_talk.h
INCBONUS = bonus/ft_mini_talk_bonus.h

CLIENTFILES = clt/ft_client.c
SERVERFILES = srv/ft_server.c
TOOLSFILES =  mini_talk_utils/ft_atoi.c mini_talk_utils/ft_putstr.c \
mini_talk_utils/ft_putchar.c mini_talk_utils/ft_send_bin.c \
mini_talk_utils/ft_putnbr.c mini_talk_utils/ft_is_received.c

CLIENTFILESBONUS = bonus/clt/ft_client_bonus.c
SERVERFILESBONUS = bonus/srv/ft_server_bonus.c
TOOLSFILESBONUS =  bonus/mini_talk_utils/ft_atoi_bonus.c bonus/mini_talk_utils/ft_putstr_bonus.c \
bonus/mini_talk_utils/ft_putchar_bonus.c bonus/mini_talk_utils/ft_send_bin_bonus.c \
bonus/mini_talk_utils/ft_putnbr_bonus.c bonus/mini_talk_utils/ft_is_received_bonus.c


OCLIENTFILES = ${CLIENTFILES:.c=.o}
OTOOLSFILES = ${TOOLSFILES:.c=.o}
OSERVERFILES = ${SERVERFILES:.c=.o}

OCLIENTFILESBONUS = ${CLIENTFILESBONUS:.c=.o}
OTOOLSFILESBONUS = ${TOOLSFILESBONUS:.c=.o}
OSERVERFILESBONUS = ${SERVERFILESBONUS:.c=.o}

all : client server

$(NAME) = all

client : $(OTOOLSFILES) $(OCLIENTFILES)
	@ echo "Compiling Client...."
	@$(CC) $(FLAGS) $(OCLIENTFILES) $(OTOOLSFILES) -o client
server : $(OTOOLSFILES) $(OSERVERFILES)
	@ echo "Compiling Server...."
	@$(CC) $(FLAGS) $(OSERVERFILES) $(OTOOLSFILES) -o server

bonus : clientbonus serverbonus

clientbonus : $(OTOOLSFILESBONUS) $(OCLIENTFILESBONUS)
	@ echo "Compiling Client Bonus...."
	@$(CC) $(FLAGS) $(OCLIENTFILESBONUS) $(OTOOLSFILESBONUS) -o client
serverbonus : $(OTOOLSFILESBONUS) $(OSERVERFILESBONUS)
	@ echo "Compiling Server Bonus...."
	@$(CC) $(FLAGS) $(OSERVERFILESBONUS) $(OTOOLSFILESBONUS) -o client
clean :
	@ echo "Cleaning..."
	@ rm -rf $(OTOOLSFILES) $(OTOOLSFILESBONUS)
	@ rm -rf $(OCLIENTFILES) $(OCLIENTFILESBONUS)
	@ rm -rf $(OSERVERFILES) $(OSERVERFILESBONUS)
fclean : clean
	@ echo "Cleaning all..."
	@ rm -rf client
	@ rm -rf server
re : fclean all
.PHONY : all clean fclean re bonus client server
