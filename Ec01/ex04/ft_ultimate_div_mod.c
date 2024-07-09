/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:14:52 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 17:20:11 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*int main(void)
{
	int a;
	int b;

	a = 13;
	b = 6;

	ft_ultimate_div_mod(&a, &b);
	a += '0';
	b += '0';
	write(1, &a, 1);
	write(1, &b, 1);
	return 0;
}*/
