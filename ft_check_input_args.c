/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_args.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:27:04 by cchouire          #+#    #+#             */
/*   Updated: 2022/07/23 18:27:07 by cchouire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check_input_args(int ac, char **av, int *input)
{
  if ((ac < 2 && ac > 3)|| (*input = ft_atoi(av)) < 0)
  {
	  write(1, "error", 5);
	  return (-1);
  }
  return (*input);
}

