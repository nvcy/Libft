/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:07:27 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/19 19:30:28 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sp1;
	const unsigned char	*sp2;

	i = 0;
	sp1 = (const unsigned char *) s1;
	sp2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (sp1[i] != sp2[i])
			return (sp1[i] - sp2[i]);
		i++;
	}
	return (0);
}
