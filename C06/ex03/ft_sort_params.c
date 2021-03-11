/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 01:18:25 by donggele          #+#    #+#             */
/*   Updated: 2021/03/12 02:57:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr_print(char *arr)
{
	while (*arr)
		write(1, arr++, 1);
}

void	arr_swap(char *arr1[], char *arr2[])
{
	char *temp;

	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

int	arr_strcmp(char *arr1, char *arr2)
{
	while (*arr1 != '\0' && (*arr1 == *arr2))
	{
		arr1++;
		arr2++;
	}
	return (*(unsigned char*)arr1 - *(unsigned char*)arr2);
}

void	arr_sort_ascii(char *arr[], int size)
{
	int index;
	int swapped;

	while (1)
	{
		index = 1;
		swapped = 0;
		while (index < size)
		{
			if (arr_strcmp(arr[index], arr[index + 1]) > 0)
			{
				arr_swap(&arr[index], &arr[index + 1]);
				swapped = 1;
			}
			index++;
		}
		if (!swapped)
			break ;
	}	
}

int	main(int argc, char *argv[])
{
	int index;

	if (argc > 2)
		arr_sort_ascii(argv, argc - 1);
	index = 1;
	while (index < argc)
	{	
		arr_print(argv[index++]);
		write(1, "\n", 1);
	}

	return (0);
}
