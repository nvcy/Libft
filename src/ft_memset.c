/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:30:03 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/13 21:22:48 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *ptr;
    
    i = 0;
    ptr = (unsigned char *) b;
    while (i < len)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return (b);
}