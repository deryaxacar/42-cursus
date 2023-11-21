/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:33:27 by deryacar          #+#    #+#             */
/*   Updated: 2023/11/21 12:33:28 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	wall_control(t_game *data)
{
	int	i;
	int	j;
	int	height;
	int	width;

	i = 0;
	j = 0;
	height = data->map_height - 1;
	width = data->map_width - 1;
	while (i <= height)
	{
		if (data->map[i][0] != '1' || data->map[i][width] != '1')
			error_message("Faulty map");
		i++;
	}
	while (j <= width)
	{
		if (data->map[0][j] != '1' || data->map[height][j] != '1')
			error_message("Faulty map");
		j++;
	}
}

static	void	line_control(t_game *data, char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (i != data->map_width)
		error_message("Line in text is wrong");
}

void	map_processing(t_game *data)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	data->map = (char **)malloc(sizeof(char *) * data->map_height);
	if (data->map == NULL)
	{
		error_message("Place could not be reserved");
		exit_point(data);
	}
	fd = open(data->maplocation, O_RDONLY);
	while (i < data->map_height)
	{
		line = get_next_line(fd);
		line_control(data, line);
		data->map[i] = ft_strdup(line);
		if (data->map[i] == NULL)
			break ;
		i++;
		free(line);
	}
	close (fd);
}

static	int	find_map_width(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	return (i);
}

void	map_reading(t_game *data)
{
	int		fd;
	char	*line;

	data->index.i = 0;
	data->index.j = 0;
	fd = open(data->maplocation, O_RDONLY);
	line = get_next_line(fd);
	if (!line || line[data->index.i] == 32
		|| line[data->index.i] == '\t')
	{
		free(line);
		close(fd);
		error_message("Map is empty");
	}
	data->index.j = find_map_width(line);
	while (line)
	{
		free(line);
		data->index.i++;
		line = get_next_line(fd);
	}
	data->map_height = data->index.i;
	data->map_width = data->index.j;
	close(fd);
}
