/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/15 18:48:14 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str = str + 1;
	}
}

void test(char *s1, char *s2, unsigned int n)
{
	printf("s1: %s, s2: %s, ft_strncmp: %i, strncmp %i\n",
	 s1, s2, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}

int	main(void)
{
	test("Destanation", "Source", 5);
	test("Source", "Destanation", 7);
	test("Data", "", 0);
	test("", "Data", 2);
	test("!!!", "!!!", 4);
	test("hihi", "Hello", 3);
	return (0);
}
