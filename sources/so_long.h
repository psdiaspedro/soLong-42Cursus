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
	void 	**map;
	// void	*img_player;
	// int		img_width;
	// int		img_height;
	// int		x;
	// int		y;
}	t_game;

typedef struct s_map
{

} t_map;

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

#endif
