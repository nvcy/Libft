/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:16:44 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/16 13:09:08 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	len = len + 1;
	while (len--)
	{
		if (s[len] == (char c))
			return(&s[len]);
	}
	return (NULL);
}