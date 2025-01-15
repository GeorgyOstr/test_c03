/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/15 17:23:20 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str = str + 1;
	}
}

void test(char *s1, char *s2)
{
	printf("s1: %s, s2: %s, ft_strlen: %i, strlen %i\n",
	 s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
}

int	main(void)
{
	test("Destanation", "Source");
	test("Source", "Destanation");
	test("Data","");
	test("","Data");
	test("!!!","!!!");
	test("hihi", "Hello");
	return (0);
}
