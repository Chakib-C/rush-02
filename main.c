/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:55:17 by jbury             #+#    #+#             */
/*   Updated: 2022/07/24 20:51:48 by jbury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	main(int argc, char **argv[])
{
	int	res;
	bool	x;

	x = true;

	ft_check_input_args(argc, argv);
	if (ft_is_numeric == x)
	{
		res = ft_atoi(argc, argv);
		ft_div_mod(res);
		ft_itoa(ft_div_mod(res));
		open("numbers.dict", O_RDONLY);
		read(fd, *buf, nbytes);
		if (to_find(res) == x)
			ft_putstr(to_find);
		else
			ft_putstr("Dict Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
