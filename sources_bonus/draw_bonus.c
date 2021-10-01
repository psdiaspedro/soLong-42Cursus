#include "so_long_bonus.h"

void img_draw(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, image, x * 32, y * 32);
}

void player_draw(t_game *game, void *image, int x, int y)
{
	game->x_player = x;
	game->y_player = y;
	img_draw(game, image, x, y);
}

int map_draw(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while(game->map[y])
	{
		x = 0;
		while(game->map[y][x])
		{
			if(game->map[y][x] == '1')
				img_draw(game, game->img_wall, x, y);
			else if(game->map[y][x] == '0')
				img_draw(game, game->img_backg, x, y);
			else if(game->map[y][x] == 'P')
				player_draw(game, game->img_player, x, y);
			else if(game->map[y][x] == 'C')
				img_draw(game, game->img_colect, x, y);
			else if(game->map[y][x] == 'E')
				img_draw(game, game->img_exit, x, y);
			x++;
		}
		y++;
	}
	return (0);
}
