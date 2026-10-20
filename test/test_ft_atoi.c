/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:33:00 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/20 19:33:56 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		printf("TEST 1 : PASS\n");
	else
		printf("TEST 1 : FAIL\n");
	if (ft_atoi("0") == atoi("0"))
		printf("TEST 2 : PASS\n");
	else
		printf("TEST 2 : FAIL\n");
	if (ft_atoi("-6484369") == atoi("-6484369"))
		printf("TEST 3 : PASS\n");
	else
		printf("TEST 3 : FAIL\n");
	return (0);
}
