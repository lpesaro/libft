/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:59:00 by lpesaro           #+#    #+#             */
/*   Updated: 2023/01/23 18:52:46 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = start;
	if (!s)
		return (NULL);
	while (*s && start-- > 0)
		s++;
	i = ft_strlen(s);
	if (i < len)
		len = i;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (*s && i < len)
		substr[i++] = *(s++);
	substr[i] = 0;
	return (substr);
}
