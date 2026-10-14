/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:27:13 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/14 18:16:12 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char		*d;
	const unsigned char	*s;
	
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (d > s && d < s + len)
	{
		while (len--)
			*(d + len) =  *(s + len);
	}
	else 
	{
		while (len--)
		{
			*d =  *s;
			d++;
			s++;
		}
	}
	return (dst);
}