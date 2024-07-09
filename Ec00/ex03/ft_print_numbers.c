/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:25:29 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/09 14:44:20 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nb;

	nb = '0';
	while (nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
