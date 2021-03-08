/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:54:52 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 23:07:35 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char a[5] = "abcde";
	char b[4] = "abcf";

	int i = ft_strcmp(a, b);
	printf("%d", i);
}
