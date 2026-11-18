/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:43:41 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 23:12:31 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i ;
	i = 0;
	
	const unsigned char *p;
	unsigned char b = (unsigned char)c;

	p = (const unsigned char *)s;

	while (n > i)
	{
		if (*p == b)
			return ((void *)p);
		i++;
		p++;
	}
	return (NULL);
}

