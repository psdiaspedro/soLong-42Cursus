#include "so_long_bonus.h"

int animate(t_game *game)
{
	game->y_player -= 1;
	player_w(game);
	return (0);
}
