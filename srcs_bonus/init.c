/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <abourdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:12:46 by abourdar          #+#    #+#             */
/*   Updated: 2021/09/06 13:12:47 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	init_path(char **env, t_glb *glb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (env[i])
	{
		if (!ft_strncmp(env[i], "PATH=", 5))
		{
			glb->path = ft_split(glb, env[i] + 5, ':');
		}
		i++;
	}
}

void	init_struct(t_glb *global)
{
	global->cmd = malloc_list(global, sizeof(t_cmd));
	global->recup = malloc_list(global, sizeof(t_rec));
	global->cmd->check = 0;
	global->path_i = 0;
	global->check_path = 0;
}
