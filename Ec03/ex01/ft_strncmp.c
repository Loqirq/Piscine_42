/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:41:35 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 14:50:47 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		s1--;
		s2--;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	unsigned int	n;
	char	s1[] = "hahah";
	char	s2[] = "heheh";
	int val = 0;
	
	val = ft_strncmp(s1, s2, n);
	printf("%i", val);
	return (0);
}*/
