/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:17:55 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/19 17:45:24 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, size + 1);
	return (dup);
}
