/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:40:10 by lpesaro           #+#    #+#             */
/*   Updated: 2023/01/28 21:30:00 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_space(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
		{
			return (true);
		}
		str++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		k;
	int		i;
	int		j;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (*s1 && ft_space(s1[j], set))
		j++;
	k = ft_strlen((char *)s1);
	while (k > j && ft_space(s1[k - 1], set))
		k--;
	result = (char *)malloc(sizeof(*s1) * (k - j + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (k > j)
	{
		result[i++] = s1[j++];
	}
	result[i] = 0;
	return ((char *)result);
}
