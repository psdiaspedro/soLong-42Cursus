#include "so_long.h"

void img_init(t_game *game)
{
	game->img_backg = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/0.xpm", &game->img_w, &game->img_h);
	game->img_wall = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/1.xpm", &game->img_w, &game->img_h);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/P.xpm", &game->img_w, &game->img_h);
	game->img_colect = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/C.xpm", &game->img_w, &game->img_h);
	game->img_exit = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/E.xpm", &game->img_w, &game->img_h);
}

void game_init(t_game *game)
{
	game->mlx = mlx_init();
	size_window(game);
	game->win = mlx_new_window(game->mlx, game->map_w, game->map_h, "42");
	img_init(game);
	map_draw(game);
}
