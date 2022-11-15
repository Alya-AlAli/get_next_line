/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:29:46 by alal-ali          #+#    #+#             */
/*   Updated: 2022/04/27 16:59:22 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined_string;
	int		s1len;
	int		s2len;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined_string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joined_string == NULL)
		return (NULL);
	s1len = -1;
	s2len = 0;
	if (s1)
		while (s1[++s1len] != '\0')
	joined_string[s1len] = s1[s1len];
	while (s2[s2len] != '\0')
	joined_string[s1len++] = s2[s2len++];
	joined_string[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (joined_string);
}
