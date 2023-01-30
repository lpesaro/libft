/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:19:11 by lpesaro           #+#    #+#             */
/*   Updated: 2023/01/28 21:34:52 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_word(const char *s, char c)
{
	int	count;
	int	l;

	count = 0;
	while (*s)
	{
		l = word_len(s, c);
		if (!l)
			s++;
		else
		{
			count++;
			s += l;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**final;

	if (!s)
		return (NULL);
	final = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		j = word_len(s, c);
		final[i] = ft_substr(s, 0, j);
		s += j;
		if (!final[i++])
			return (NULL);
	}
	final[i] = 0;
	return (final);
}
