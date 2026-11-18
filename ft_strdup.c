/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:44:21 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 17:12:18 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
	char *ft_strdup(const char *s)
{
	size_t i = 0;
	char *copy;
	copy = malloc(ft_strlen(s) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}