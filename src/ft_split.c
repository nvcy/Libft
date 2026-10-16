/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:08:31 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/16 14:24:37 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int	lenofstrs(char c, const char *s)
{
    size_t	i;
	size_t	len;
	
	i = 0;
	len = 1;
	while (s[i])
	{
		if (c == s[i - 1] && s[i + 1] == '\0')
			len++;
		i++;
	}
	return (len);
}

char	*phrase_copy(char const *s, char c, size_t *start, size_t *end)
{
	size_t	i;
	char	*phrase;
	i = 0;
	while (s[i] != c)
	{
		(*end)++;
		i++;
	}
	phrase = malloc ((*end - *start + 1) * sizeof(char));
	i = 0;
	while (*start < *end)
	{
		phrase[i] = s[*start];
	    i++;
		(*start)++;	
	}
	phrase[i] = '\0';
	return (phrase);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int	len;
	size_t start;
	size_t	end;
	int	i;

	start = 0;
	end = 0;
	i = 0;
	len = lenofstrs(c,s);
	printf("%d",len);
	strs = malloc((len + 1) * sizeof(char *));
	while (i < len)
	{
		strs[i] =  phrase_copy(s,c, &start, &end);
	 	i++;	
	}
	strs[i] = NULL;
	return (strs);
}


int main()
{
	char *s = "apple";
	char **strs;

	strs = ft_split(s,'a');
	while (*strs)
	{
		printf("%s",*strs);
		strs++;
	}
}
