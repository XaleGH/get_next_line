/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaux <asaux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:10:08 by asaux             #+#    #+#             */
/*   Updated: 2023/11/08 12:53:01 by asaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr_gnl(char *s, int c)
{
	int		i;

	i = -1;
	if (!c)
		return (0);
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen_gnl(s1);
	j = ft_strlen_gnl(s2);
	str = malloc(sizeof (char) * (i + j + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

char	*ft_strndup_gnl(char *s1, int l)
{
	char	*str;
	int		i;

	i = -1;
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	while (s1[++i] && i < l)
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}

int	ft_strlen_gnl(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}
