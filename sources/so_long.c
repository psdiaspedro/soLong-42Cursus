#include "so_long.h"

int main (int argc, char **argv)
{
	t_game game;

	if(argc == 2)
	{
		game.map = read_map(argv[1]);
		if(map_checker(&game))
		{
			game_init(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			printf("Error\nInvalid Map");
			free(game.map);
			exit(1);
		}
	}else
	{
		printf("Error\nInvalid Sytax");
		exit(1);
	}
	return (0);
}
