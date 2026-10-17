/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:43:20 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/17 19:54:19 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	i;
    char	*mapedstr;
	
    i = 0;
    mapedstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if(!mapedstr)
		return (NULL);
    while (s[i])
    {
        mapedstr[i] = f(i, s[i]);
		i++;
    }
	mapedstr[i] = '\0';
	return (mapedstr);
}