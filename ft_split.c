/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naikhoua <naikhoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:44:14 by naikhoua          #+#    #+#             */
/*   Updated: 2026/11/16 13:44:15 by naikhoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (!str[i])
			return (words);
		words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

static int	ft_word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char **str, int index)
{
	while (index--)
		free(str[index]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char **res;
	int count_words;
	int i;

	if (!s)
		return (NULL);
	count_words = ft_word_counter(s, c);
	res = malloc(sizeof(char *) * (count_words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < count_words)
	{
		while (*s && (*s == c))
			s++;
		res[i] = malloc(ft_word_len(s, c) + 1);
		if (!res[i])
			return (ft_free(res, i));
		ft_strlcpy(res[i], s, ft_word_len(s, c) + 1);
		s += ft_word_len(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}