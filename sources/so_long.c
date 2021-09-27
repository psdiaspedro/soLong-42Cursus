#include "so_long.h"

int main (int argc, char **argv)
{
	t_game game;

	if(argc == 2)
	{
		game.map = read_map(argv[1]);
		if(map_checker(game.map))
		{
			game_init(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			printf("MAPA INVALIDO");
			free(game.map);
			exit(1);
		}
	}else
	{
		printf("ERRO SEM MAPA");
		exit(1);
	}
	return (0);
}
