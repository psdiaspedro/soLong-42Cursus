/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:59:28 by paugusto          #+#    #+#             */
/*   Updated: 2021/10/06 15:09:55 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	extension_checker(char *file)
{
	if (!file)
		return (0);
	if (!ft_strncmp(ft_strrchr(file, '.'), ".ber", 5))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (map_checker(&game) && extension_checker(argv[1]))
		{
			game_init(&game);
			gameplay(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			free_map(game.map);
			printf("Error\nInvalid Map");
			exit(1);
		}
	}
	else
	{
		printf("Error\nInvalid Sytax");
		exit(1);
	}
	return (0);
}
