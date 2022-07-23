/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:02:52 by cchouire          #+#    #+#             */
/*   Updated: 2022/07/23 16:22:41 by cchouire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_num(char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res);
}

char	*set_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i - 1] != ' ')
		i++;
	return (ft_strdup(&str[i]));
}
