/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:58:52 by paugusto          #+#    #+#             */
/*   Updated: 2021/10/05 09:30:41 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	animation(t_game *game)
{
	if (game->loop < 2500)
	{
		game->loop++;
		return (0);
	}
	game->loop = 0;
	mlx_destroy_image(game->mlx, game->img_enemie);
	if (game->pos_enemies == 1)
		game->img_enemie = mlx_xpm_file_to_image
			(game->mlx, "assets/images/EN1.xpm", &game->img_w, &game->img_h);
	else if (game->pos_enemies == 2)
		game->img_enemie = mlx_xpm_file_to_image
			(game->mlx, "assets/images/EN2.xpm", &game->img_w, &game->img_h);
	else if (game->pos_enemies == 3)
		game->img_enemie = mlx_xpm_file_to_image
			(game->mlx, "assets/images/EN3.xpm", &game->img_w, &game->img_h);
	else if (game->pos_enemies == 4)
	{
		game->img_enemie = mlx_xpm_file_to_image
			(game->mlx, "assets/images/EN4.xpm", &game->img_w, &game->img_h);
		game->pos_enemies = 0;
	}
	map_draw(game);
	game->pos_enemies++;
	return (0);
}
