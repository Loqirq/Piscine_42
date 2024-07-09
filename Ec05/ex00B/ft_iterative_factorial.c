/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:40:47 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/09 11:03:05 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb --;
	}
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
