/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:08:31 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/20 19:38:29 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	count_word(char const *s, char c)
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

static char	*copy_word(char const *s, char c, size_t *pos)
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

static int	mem_free(char **mem, size_t start)
{
	if (!mem[start])
	{
		while (start > 0)
			free(mem[--start]);
		free(mem);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**strs;
	size_t	i;
	size_t	pos;

	if (!s)
		return (NULL);
	size = count_word(s, c);
	strs = malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < size)
	{
		strs[i] = copy_word(s, c, &pos);
		if (mem_free(strs, i))
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
