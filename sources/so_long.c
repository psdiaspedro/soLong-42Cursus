#include "so_long.h"

int main (int argc, char **argv)
{
	t_game game;

	if(1)
	{
		game.map = read_map(argv[1]);
		if(game.map)
		{
			game.mlx = mlx_init();
			game.win = mlx_new_window(game.mlx, 500, 500, "42");
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
