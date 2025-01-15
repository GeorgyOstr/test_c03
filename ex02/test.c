/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:51:48 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/15 21:25:04 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

void	ft_test(char *dest, char *src)
{ 
	printf("Dest: %s, src: %s,", dest, src);
	ft_strcat(dest, src);
	printf(" After ft_strcat - Dest: %s, src %s\n", dest, src);
}

void	test(char *dest, char *src)
{ 
	printf("Dest: %s, src: %s,", dest, src);
	strcat(dest, src);
	printf(" After strcat - Dest: %s, src %s\n", dest, src);
}

int	main(void)
{
	 
	char dest[100] = "destanation";
	char src[20] = "source";
	test(dest, src);
	ft_test(dest, src);
	//ft_test("Source", "Destanation");
	//test("Data", "") ;
	//ft_test("Data", "");
	//test("", "Data");
	//ft_test("", "Data");
	//test("!!!", "!!!");
	//ft_test("!!!", "!!!");
	//test("hihi", "Hello");
	//ft_test("hihi", "Hello");
	return (0);	
}
