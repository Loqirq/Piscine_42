/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:13:37 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/09 15:33:55 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	if (nb / i == 1)
		return (1);
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(9));
	return (0);
}
