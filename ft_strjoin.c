/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:00:14 by ldaniel           #+#    #+#             */
/*   Updated: 2023/04/13 14:27:55 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		s3[i] = *s2++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

char	*ft_strchr(const char *str, int c)
{
	char	*chr;
	int		i;
	
	chr = (char *)s;
	i = 0;
	while (chr[i])
	{
		if (chr[i] == (char)c)
			return (&chr[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
	}
}
