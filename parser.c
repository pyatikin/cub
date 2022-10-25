/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 02:31:39 by leroy             #+#    #+#             */
/*   Updated: 2022/10/11 16:23:05 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	parser(t_all *vars, char *path)
{
	int	fd;

	if (ft_strlen(path) < 5
		|| ft_strncmp(path + (ft_strlen(path) - 4), ".cub", 4) != 0)
		ft_exit(vars, "Not \".cub\" extension!");
	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_exit(vars, NULL);
	get_elements(vars, fd);
	get_map(vars, fd);
}
