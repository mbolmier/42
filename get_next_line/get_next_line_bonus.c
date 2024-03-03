/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:47:32 by mbolmier          #+#    #+#             */
/*   Updated: 2024/03/03 13:40:49 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	find_end_line(const char *str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == '\n')
				return (i + 1);
			i++;
		}
	}
	return (0);
}

static char	*read_line(int fd, char *buffer, char *stack)
{
	int		empty;
	int		value;

	empty = 0;
	value = 1;
	while (!find_end_line(stack) && value > 0)
	{
		value = read(fd, buffer, BUFFER_SIZE);
		if (value != -1)
			buffer[value] = '\0';
		if (value > 0)
		{
			stack = ft_strjoinfree(stack, buffer);
			empty = 1;
		}
	}
	if (stack && !empty && !stack[0])
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

static char	*extract_line(char *stack)
{
	size_t	i;
	size_t	end_line;
	char	*line;

	i = 0;
	if (!stack)
		return (NULL);
	end_line = find_end_line(stack);
	if (!end_line)
		return (ft_strdup(stack));
	line = malloc(sizeof(char) * (end_line + 1));
	if (!line)
		return (NULL);
	line[end_line] = '\0';
	while (i < end_line)
	{
		line[i] = stack[i];
		i++;
	}
	return (line);
}

static void	extract_memory(char buffer[BUFFER_SIZE + 1])
{
	size_t	i;
	size_t	end_line;

	i = 0;
	end_line = find_end_line(buffer);
	if (end_line)
	{
		while (buffer[end_line])
			buffer[i++] = buffer[end_line++];
		while (i <= BUFFER_SIZE)
			buffer[i++] = '\0';
	}
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*stack;
	static char	buffer[1005][BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer[fd], 0) < 0 || fd > 1004)
		return (NULL);
	if (buffer[fd][0] == '\n')
	{
		extract_memory(buffer[fd]);
		return (line_feed());
	}
	stack = ft_strdup(buffer[fd]);
	if (stack)
		stack = read_line(fd, buffer[fd], stack);
	if (!stack)
	{
		extract_memory(buffer[fd]);
		return (NULL);
	}
	line = extract_line(stack);
	extract_memory(buffer[fd]);
	free(stack);
	return (line);
}
