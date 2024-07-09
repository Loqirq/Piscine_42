/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:58:17 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/05 14:42:18 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0') && (*str <= '9'))
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
	char	str[25] = "123456789";

	i = 0;
	
	ft_str_is_numeric(str);
	printf ("%s\n", str);
	return (0);
}*/
