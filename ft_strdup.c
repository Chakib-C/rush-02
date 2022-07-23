/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchouire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:25:58 by cchouire          #+#    #+#             */
/*   Updated: 2022/07/23 16:29:24 by cchouire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char *dest;
	int	i;

	i = 0;
	dest = malloc((ft_strlen(src) +1) * sizeof(char));
	if(!dest)
		return (NULL);
	

	while (str[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
