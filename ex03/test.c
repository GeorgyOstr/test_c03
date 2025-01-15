/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:51:48 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/15 22:59:09 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

void	ft_test(char *dest, char *src, unsigned int n)
{ 
	printf("Dest: %s, src: %s,", dest, src);
	ft_strncat(dest, src);
	printf(" After ft_strcat - Dest: %s, src %s\n", dest, src);
}

void	test(char *dest, char *src, unsigned int n)
{ 
	printf("Dest: %s, src: %s,", dest, src);
	strncat(dest, src);
	printf(" After strcat - Dest: %s, src %s\n", dest, src);
}

int	main(void)
{
	 
	char dest[100] = "destanation";
	char src[20] = "source";
	test(dest, src, 4);
	ft_test(dest, src, 5);
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
