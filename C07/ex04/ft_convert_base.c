/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:47:57 by donggele          #+#    #+#             */
/*   Updated: 2021/03/16 02:27:40 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_base_valid(char *str);
int		ft_is_whitespace(char c);


int		resolve_base(char *base, char match)
{
	int index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (-1);
}

char	change_base(char *base, unsigned int result, int minus))
{
	

}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				form;
	int				minus;
	unsigned int	result;


	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	form = ft_strlen(base_from);
	result = 0;
	minus = 1;
	while (ft_is_whitespace(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if(*nbr++ == '-')
			minus *= -1;
	}
	while (resolve_base(base_from, *nbr) != -1)
	{
		result *= form;
		result += resolve_base(base_from, *nbr);
		nbr++;
	}
	result, minus, base_to, 
	
}
