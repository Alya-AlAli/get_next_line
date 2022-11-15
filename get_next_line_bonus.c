/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:03:01 by alal-ali          #+#    #+#             */
/*   Updated: 2022/04/27 16:59:12 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
// #define BUFFER_SIZE 20

char	*ft_get_left_line_s(char *str)
{
	int		i;
	char	*left_str;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	left_str = (char *)malloc(sizeof(char) * (i + 2));
	if (!left_str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		left_str[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		left_str[i] = str[i];
		i++;
	}
	left_str[i] = '\0';
	return (left_str);
}

char	*ft_save_right_str(char *save)
{
	int		i;
	int		a;
	char	*new_string;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i] || (save[i] == '\n' && !save[i + 1]))
	{
		free(save);
		return (NULL);
	}
	new_string = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!new_string)
		return (NULL);
	i++;
	a = 0;
	while (save[i])
		new_string[a++] = save[i++];
	new_string[a] = '\0';
	free(save);
	return (new_string);
}

char	*ft_read(int fd, char *str)
{
	int		ret;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	ret = 1;
	while (!ft_strchr(str, '\n') && ret != 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[1392];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str[fd] = ft_read(fd, str[fd]);
	if (!str[fd])
		return (0);
	line = ft_get_left_line_s(str[fd]);
	str[fd] = ft_save_right_str(str[fd]);
	return (line);
}
