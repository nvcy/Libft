/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:44:05 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/15 21:55:35 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	set_len;
// 	size_t	str_len;
// 	size_t	i;
// 	int	bflag = 1;
// 	int	eflag = 1;
// 	char	*str_trimed;
// 	size_t	trimed_size;
// 	int	j;

// 	j = 0;
// 	i = 0;
// 	set_len = ft_strlen(set);
// 	str_len = ft_strlen(s1);
// 	while (i < set_len)
// 	{
// 		if(s1[i] != set[i])
// 			bflag = 0;
// 		if (s1 [i + (str_len - set_len)]  != set[i])
// 			eflag = 0;
// 		i++;
// 	}
// 	trimed_size = str_len - eflag * set_len - bflag * set_len + 1;
// 	str_trimed = malloc(trimed_size * sizeof(s1));
// 	i = 0;
// 	if (bflag)
// 	{
// 		i = i + set_len;
// 	}
// 	while (s1[i])
// 	{
// 		if (eflag && i == str_len - set_len)
// 		{
// 			break;
// 		}
// 		str_trimed[j] = s1[i];
// 		i++;
// 		j++;
// 	}
// 	return (str_trimed);
// }

int inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	set_len;
	size_t	start;
	size_t	end;
	
	set_len = ft_strlen(set);
	str_len = ft_strlen(s1);
	start = 0;
	end = str_len - 1;
	while (inset(s1[start], set))
		start++;
	while (inset(s1[end], set))
		end--;
	return (ft_substr(s1, start,  end - start));
}

int	main()
{
	char *str = " absjhjkhdhjabs ";
	char *trim = ft_strtrim(str,"as");
	printf("%s",trim);
	
}