/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:56:10 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 17:40:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		youfirst(char *str)
{
	if (*(str - 1) >= '0' && *(str - 1) <= '9')
		return (0);
	else if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
		return (0);
	else if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (*temp >= 'A' && *temp <= 'Z')
			*temp += 32;
		temp++;
	}
	temp = str;
	if (*temp >= 'a' && *temp <= 'z')
		*temp -= 32;
	temp++;
	while (*temp)
	{
		if (youfirst(temp))
		{
			if (*temp >= 'a' && *temp <= 'z')
				*temp -= 32;
		}
		temp++;
	}
	return (str);
}
