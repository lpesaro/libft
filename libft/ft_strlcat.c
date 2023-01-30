/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:27:13 by lpesaro           #+#    #+#             */
/*   Updated: 2023/01/20 00:31:04 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	if (size < 1)
		return (slen + size);
	dlen = ft_strlen(dest);
	if (size < dlen + 1)
		return (size + slen);
	else if (size > dlen + 1)
	{
		while (src[i] != '\0' && dlen + 1 + i < size)
		{
			dest[dlen + i] = src[i];
			i++;
		}
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
