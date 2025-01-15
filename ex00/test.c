/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:24:54 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/14 16:42:36 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcmp(char *s1, char *s2);

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
	
}

int	main(void)
{
	char src[50] = "abc\n";
	char dest[100] = "Destanation\n";

	return (0);
}
