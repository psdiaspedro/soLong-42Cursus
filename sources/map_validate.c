#include "so_long.h"

int is_retangular(char **map)
{
	int i;

	i = 1;
	if(!map)
		return(0);
	while(map[i] != '\0')
	{
		if(ft_strlen(map[i]) != ft_strlen(map[0]))
			return(0);
		i++;
	}
	return(1);
}

int is_wall(char **map)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	i = 0;
	while(map[i] != '\0')
		i++;
	while(map[0][j] != '\0' && map[i - 1][j] != '\0')
	{
		if(map[0][j] != '1' || map[i-1][j] != '1')
			return(0);
		j++;
	}
	i = 1;
	len = ft_strlen(map[i]);
	while(map[i] != '\0')
	{
		if(map[i][0] != '1' || map[i][len -1] != '1')
			return(0);
		i++;
	}
	return(1);
}

int map_checker(char **map)
{
	if (is_retangular(map) && is_wall(map))
		return(1);
	return(0);
}

/* MAPA VALIDO

	0, 1, C, E, P

	0 - FREE SPACE
	1 - WALL
	C - COLLECTIBLE
	E - MAP EXIT
	P - PLAYER START POSITION


	obrigações

	- FECHADO POR PARADES (1)
	- PELO MENOS 1 EXIT, 1 COLLECTIBLE, 1 PLAYER START POSITION
	- O MAPA DEVE SER RETANGULAR
*/
