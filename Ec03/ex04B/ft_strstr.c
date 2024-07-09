/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:14:40 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 14:33:51 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (!*to_find)
		return (str);
	while (*str != '\0')
	{
		a = str;
		b = to_find;
		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == 0)
			return (str);
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "we lost the quarterfinals";
	char	to_find[] = "lost";

	ft_strstr(str, to_find);
	printf ("%s\n", to_find);
	return (0);
}*/
