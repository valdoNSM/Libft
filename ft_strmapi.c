/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:44:39 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 23:04:08 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*retstr;
	char	*retstrhead;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	retstr = malloc(slen + 1);
	if (!retstr)
		return (NULL);
	retstrhead = retstr;
	i = 0;
	while (*s)
		*retstr++ = f(i++, (char)*s++);
	*retstr = '\0';
	return (retstrhead);
}
