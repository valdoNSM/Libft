/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:43:47 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 23:15:30 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	const unsigned char	*source;

	dst = ((unsigned char *)dest);
	source = ((const unsigned char *)src);

	while (n > 0)
	{
		*dst = *source;

		dst++;
		source++;
		n--;
	}
	return (dest);
}
