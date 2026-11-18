/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:43:44 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 23:13:04 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	i = 0;
	b1 = ((unsigned char *)s1);
	b2 = ((unsigned char *)s2);
	while (n > i && b1[i] == b2[i])
	{
		i++;
	}
	if (n == i)
		return (0);
	return (b1[i] - b2[i]);
}
