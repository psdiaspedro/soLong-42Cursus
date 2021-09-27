#ifndef SO_LONG_H
# define SO_LONG_H

//# include "../libraries/minilibx/mlx_int.h"
# include "../libraries/minilibx/mlx.h"
# include "../libraries/libft/libft.h"
# include <stdio.h>
// # include <unistd.h>
// # include <stdlib.h>
# include <fcntl.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_backg;
	void	*img_wall;
	void	*img_player;
	void	*img_colect;
	void	*img_exit;
	int		map_w;
	int		map_h;
	int		img_w;
	int		img_h;
	int		n_movments;
	int		n_colect;
	int		n_exit;
	// int		x;
	// int		y;
}	t_game;


# define IMG_PLAYER "textures/wizard.xpm"

# define KEY_ESC 65307
# define KEY_Q 113

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100

# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

void	img_draw(t_game *game, void *image, int x, int y);
void	map_draw(t_game *game);
void	img_init(t_game *game);
void	game_init(t_game *game);
char	**read_map(char *path);
void	size_window(t_game *game);
int		map_checker(char **map);


#endif
