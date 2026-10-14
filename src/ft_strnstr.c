/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:41:13 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/14 20:03:30 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdio.h>
#include <string.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(i < len && haystack[i])
	{
		j = 0;
		while ((j) < len - i)
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
			else
			{
				if (needle[j] != haystack[i + j])
					break;
				j++;
					
			}
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("%s",strnstr("hello world I'am here","here",26));
}