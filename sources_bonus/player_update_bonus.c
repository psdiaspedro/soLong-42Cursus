#include "so_long_bonus.h"

void player_update_image(char key, t_game *game)
{
	mlx_destroy_image(game->mlx, game->img_player);
	if(key == 'w')
	{
		game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/P_W.xpm", &game->img_w, &game->img_h);
	}
	else if(key == 's')
	{
		game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/P_S.xpm", &game->img_w, &game->img_h);
	}
	else if(key == 'd')
	{
		game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/P_D.xpm", &game->img_w, &game->img_h);
	}
	else if(key == 'a')
	{
		game->img_player = mlx_xpm_file_to_image
		(game->mlx, "assets/images/env_2/P_A.xpm", &game->img_w, &game->img_h);
	}
}

void player_w(t_game *game)
{
	player_update_image('w', game);
	if(game->map[game->y_player][game->x_player] == 'E'
			&& game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y_player + 1][game->x_player] = '0';
		game->moves++;
		map_draw(game);
		exit_game(game);
	}
	else if(game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->y_player += 1; //volta o player
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if(game->map[game->y_player][game->x_player] == 'C')
			game->n_colect-= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player + 1][game->x_player] = '0';
		game->moves++;
		map_draw(game);
	}
}

void player_s(t_game *game)
{
	player_update_image('s', game);
	if(game->map[game->y_player][game->x_player] == 'E'
			&& game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y_player - 1][game->x_player] = '0';
		game->moves++;
		map_draw(game);
		exit_game(game);
	}
	else if(game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->y_player -= 1; //volta o player
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if(game->map[game->y_player][game->x_player] == 'C')
			game->n_colect-= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player - 1][game->x_player] = '0';
		game->moves++;
		map_draw(game);
	}
}

void player_d(t_game *game)
{
	player_update_image('d', game);
	if(game->map[game->y_player][game->x_player] == 'E'
			&& game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y_player][game->x_player - 1] = '0';
		game->moves++;
		map_draw(game);
		exit_game(game);
	}
	else if(game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->x_player -= 1; //volta o player
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if(game->map[game->y_player][game->x_player] == 'C')
			game->n_colect-= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player][game->x_player - 1] = '0';
		game->moves++;
		map_draw(game);
	}
}

void player_a(t_game *game)
{
	player_update_image('a', game);
	if(game->map[game->y_player][game->x_player] == 'E'
			&& game->n_colect == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y_player][game->x_player + 1] = '0';
		game->moves++;
		map_draw(game);
		exit_game(game);
	}
	else if(game->map[game->y_player][game->x_player] == '1'
			|| game->map[game->y_player][game->x_player] == 'E')
		game->x_player += 1; //volta o player
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if(game->map[game->y_player][game->x_player] == 'C')
			game->n_colect-= 1;
		game->map[game->y_player][game->x_player] = 'P';
		game->map[game->y_player][game->x_player + 1] = '0';
		game->moves++;
		map_draw(game);
	}
}