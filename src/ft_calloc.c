/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:17:30 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/16 13:00:30 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*obj = malloc (count * size);
	return (ft_memset(obj,0,count * size));
}
