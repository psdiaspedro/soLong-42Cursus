#include "so_long.h"

void size_window(t_game *game)
{
	int	i;

	game->map_w = ft_strlen(game->map[0]) * 32;
	i = 0;
	while(game->map[i] != '\0')
		i++;
	game->map_h = i * 32;
}
