/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:01:25 by lpesaro           #+#    #+#             */
/*   Updated: 2023/01/23 18:31:52 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	m;

	m = count * size;
	if (size != 0 && m / size != count)
		return (NULL);
	ptr = malloc(m);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, m);
	return (ptr);
}
