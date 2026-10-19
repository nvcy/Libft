/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:09:35 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/19 17:41:39 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr_str;

	nbr_str = ft_itoa(n);
	if (!nbr_str)
		return ;
	write(fd, nbr_str, ft_strlen(nbr_str));
	free(nbr_str);
}
