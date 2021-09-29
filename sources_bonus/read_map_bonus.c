#include "so_long_bonus.h"

char	**read_map(char *path)
{
	int		fd;
	char	*line;
	char	*holder_map;
	char	*holder;
	char	**map;

	fd = open(path, O_RDONLY);
	if(fd == -1)
		return (NULL);
	holder_map = ft_strdup(""); //vaireceber o join, precisa iniciar
	while(1)
	{
		line = ft_get_next_line(fd);
		if(!line)
			break ;
		holder = holder_map; //holder para nao dar problema no join
		holder_map = ft_strjoin(holder, line);
		free(line);
		free(holder);
	}
	map = ft_split(holder_map, '\n');
	free(holder_map);
	close(fd);
	return (map);
}
