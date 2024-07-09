/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:19:01 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 14:44:01 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		{
			*s1++;
			*s2++;
			i++;
		}
		if (i == n)
		{
			*s1--;
			*s2--;
		}
		return (*s1 - *s2);
	}
}
/*int	main(void)
{
	char s1[20] = "swiss";
	char s2[20] = "swann";
	unsigned int	n;

	n = 234454456;
	ft_strncmp(s1, s2, n);
	while (*s1 && *s2)
	{
		write(1, &s1, 1);
		write(1, &s2, 1);
		s1++;
		s2++;
	}
	return (0);
}*/
