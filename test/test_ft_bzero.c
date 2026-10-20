/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:54:30 by amerghad          #+#    #+#             */
/*   Updated: 2026/10/20 19:36:38 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <strings.h>

static void	test_result(int condition, int test)
{
	printf("TEST %d : ", test);
	if (condition)
		printf("PASS\n");
	else
		printf("FAIL\n");
}

static void	init_arrays(unsigned char *a, unsigned char *b, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		a[i] = 42;
		b[i] = 42;
		i++;
	}
}

static void	test_full_clear(void)
{
	unsigned char	a[10];
	unsigned char	b[10];

	init_arrays(a, b, 10);
	ft_bzero(a, 10);
	bzero(b, 10);
	test_result(ft_memcmp(a, b, 10) == 0, 1);
}

static void	test_zero_length(void)
{
	unsigned char	a[10];
	unsigned char	b[10];

	init_arrays(a, b, 10);
	ft_bzero(a, 0);
	bzero(b, 0);
	test_result(ft_memcmp(a, b, 10) == 0, 2);
}

static void	test_partial_clear(void)
{
	unsigned char	a[10];
	unsigned char	b[10];

	init_arrays(a, b, 10);
	ft_bzero(a, 4);
	bzero(b, 4);
	test_result(ft_memcmp(a, b, 10) == 0, 3);
	test_result(a[4] == 42 && a[9] == 42, 4);
}

int	main(void)
{
	test_full_clear();
	test_zero_length();
	test_partial_clear();
	return (0);
}
