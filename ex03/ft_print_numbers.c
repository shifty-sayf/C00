/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <stun-ism@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:45:20 by stun-ism          #+#    #+#             */
/*   Updated: 2021/02/25 23:02:02 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		c;
	char	str;

	c = 0;
	while (c <= 9)
	{
		str = '0' + c;
		write(1, &str, 1);
		c++;
	}
}