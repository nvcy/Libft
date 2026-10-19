/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:03:00 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/19 20:54:21 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main()
{
	printf("TEST 1 : %s\n", (ft_atoi("-2147483648") == atoi("-2147483648")) ? "PASS" : "FAIL");
	printf("TEST 2 : %s\n", (ft_atoi("0") == atoi("0")) ? "PASS" : "FAIL");
	printf("TEST 3 : %s\n", (ft_atoi("2147483648") == atoi("2147483648")) ? "PASS" : "FAIL"); 
	printf("TEST 4 : %s\n", (ft_atoi("-6484369") == atoi("-6484369")) ? "PASS" : "FAIL"); 
	
}