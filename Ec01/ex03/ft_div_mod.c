/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:55:55 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/04 10:25:18 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	ft_div_mod(int a, int b, int *div, int *mod);
	return (0);
}*/
