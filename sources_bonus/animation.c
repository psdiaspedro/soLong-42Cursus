#include  "so_long_bonus.h"

int animation(t_game *game)
{
	if(game->loop < 1200)
	{
		game->loop++;
		return (0);
	}
	else
		game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_enemie);
	if(game->pos_enemies == 1)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E1.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 2)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E6.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 3)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E7.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 4)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E8.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 5)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E9.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 6)
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E10.xpm", &game->img_w, &game->img_h);
	else if(game->pos_enemies == 7)
	{
		game->img_enemie = mlx_xpm_file_to_image
		(game->mlx, "assets/images/enemies/E11.xpm", &game->img_w, &game->img_h);
		game->pos_enemies = 0;
	}
	map_draw(game);
	game->pos_enemies++;
	return (0);
}
