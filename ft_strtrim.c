/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:44:50 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/18 23:00:26 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	trimmed_len;
	size_t	i;
	char	*trimmed;

	s1_len = ft_strlen(s1);
	start = 0;
	if (s1_len == 0)
	{
		trimmed = malloc(1);
		if (!trimmed)
			return (NULL);
		trimmed[0] = '\0';
		return (trimmed);
	}
	end = s1_len - 1;
	while (start < s1_len && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		trimmed_len = 0;
	else
		trimmed_len = end - start + 1;
	trimmed = malloc(trimmed_len + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < trimmed_len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
