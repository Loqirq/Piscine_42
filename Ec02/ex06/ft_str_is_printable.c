/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:45:51 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 12:51:59 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '!' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int	i;
	char	str[30] = "chevalblanc";

	i = 0;

	ft_str_is_printable(str);
	printf ("%s\n", str);
	return (0);
}*/
