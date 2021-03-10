/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:44:47 by donggele          #+#    #+#             */
/*   Updated: 2021/03/10 21:32:39 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *a = "hallo";
	char *b = "hell";

	int result = strncmp(a, b, 4);
	int result1 = ft_strncmp(a, b, 4);
	printf("%d", result);
	printf("\n");
	printf("%d", result1);
	printf("\n");
	return (0);
}
