/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:43:31 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 20:57:11 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long nbr;
	int len;
	char *retstr;

	nbr = n;
	len = ft_numlen(nbr);
	retstr = malloc(len + 1);
	if (!retstr)
		return (NULL);
	retstr[len] = '\0';
	if (nbr < 0)
	{
		retstr[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		retstr[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (!n)
		retstr[0] = '0';
	return (retstr);
}
