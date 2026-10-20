/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:17:30 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/20 20:58:43 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*obj;

	if (size != 0 && count > (SIZE_MAX) / size)
		return (NULL);
	obj = malloc(count * size);
	if (!obj)
		return (NULL);
	return (ft_memset(obj, 0, count * size));
}
