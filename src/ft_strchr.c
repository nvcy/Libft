/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:28:42 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/14 18:28:12 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ( *s == (char ) c)
            return (s);
        s++;
    }
    if (*s == (char ) c)
        return (s);
    return (NULL);
}