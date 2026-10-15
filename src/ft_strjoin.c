/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:02:04 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/15 18:37:30 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	strslen(char const *s1, char const *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = strslen(s1, s2) + 1;
	sjoin = malloc((size) * sizeof(char));
	if (!sjoin)
		return (NULL);
	sjoin[0] = '\0';
	ft_strlcat(sjoin, s1, size);
	ft_strlcat(sjoin, s2, size);
	return (sjoin);
}
