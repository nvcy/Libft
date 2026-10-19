/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:54:30 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/19 21:15:36 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <strings.h>

int	main()
{
	int	 obj1[6];
	int	 obj2[6];
	int	flag;
	int	i;
	size_t size;
	
	size = 6 * 8;
	i = 0;
	ft_bzero(obj1, size);
	bzero(obj2, size);
	flag = 1;
	while (i < 6)
	{
		printf("OBJ 1 : %d OBJ2 : %d\n",obj1[i], obj2[i]);
		if(obj1[i] != obj2[i])
		{
			flag = 0;
			break ;
		}
		i++;
	}
	if (flag)
		printf("TEST 1 : PASS" );
	else
		printf("TEST 1 : FAIL" );
}