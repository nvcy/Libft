/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:28:42 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/16 13:13:19 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ( *s == (char ) c)
            return ((char *) s);
        s++;
    }
    if (*s == (char ) c)
        return ((char *) s);
    return (NULL);
}