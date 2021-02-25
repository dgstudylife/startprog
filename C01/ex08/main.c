/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:26:35 by donggele          #+#    #+#             */
/*   Updated: 2021/02/25 13:29:26 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[7] = {9, 1, 6, 4, 7, 5, 3};
	ft_sort_int_tab(arr, 7);

	for(int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	return(0);
}
