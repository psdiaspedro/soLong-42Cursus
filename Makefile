
LIBFT_PATH		=	./libraries/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./libraries/minilibx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

SOURCES_FILES	=	so_long.c \
					draw.c \
					init.c \
					read_map.c \
					map_validate.c \
					player_update.c \
					gameplay.c

SOURCES_DIR		=	sources

HEADER			=	$(SOURCES_DIR)/so_long.h

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

OBJECTS			= 	$(SOURCES:.c=.o)

NAME			=	so_long

CC				=	clang
RM				=	rm -f

# CFLAGS			=	-Wall -Wextra -Werror -no-pie -g3 -fsanitize=address
CFLAGS			=	-Wall -Wextra -Werror
MLXFLAGS		=	-L. -lXext -L. -lX11

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(MINILIBX) $(MLXFLAGS) -o $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
				$(MAKE) -C $(MINILIBX_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(MAKE) -C $(MINILIBX_PATH) clean
				$(RM) $(OBJECTS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re:				fclean all

run:
				$(MAKE) && ./so_long "assets/maps/another_2.ber"

runv:
				$(MAKE) && valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long assets/maps/another_2.ber

runiv:
				$(MAKE) && valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long assets/maps/another.berr

norm:
				norminette $(SOURCES_DIR)


img:
				convert *.jpg -set filename:base "%[basename]" "%[filename:base].xpm"

.PHONY:			all clean fclean re libft minilibx bonus
