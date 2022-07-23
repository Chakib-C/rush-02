/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:00:22 by cchouire          #+#    #+#             */
/*   Updated: 2022/07/23 20:00:42 by cchouire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	int 	value1;
	int	value2;

	if ( nb > 9 )
	{
		value1 = (nb / 10) * 10;
		value2 = (nb % 10);		
	}
}

int	main()
{
	int	nb;

	nb = 42;
	ft_putnbr(nb);
}
