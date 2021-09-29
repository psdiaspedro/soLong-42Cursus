#include "so_long_bonus.h"

void player_w(t_game *game)
{
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
