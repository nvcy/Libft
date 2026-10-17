/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:08:31 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/17 18:25:12 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*copy_word(char const *s, char c, size_t *pos)
{
	size_t	len;
	size_t	i;
	char	*word;

	while (s[*pos] && s[*pos] == c)
		(*pos)++;
	len = 0;
	while (s[*pos + len] && s[*pos + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[*pos];
		i++;
		(*pos)++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**strs;
	size_t	i;
	size_t	pos;

	size = count_word(s, c);
	strs = malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < size)
	{
		strs[i] = copy_word(s, c, &pos);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
