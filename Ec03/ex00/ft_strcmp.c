/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:50:24 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 14:41:25 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	int	i;
	int	j;
	char	s1[30] = "hohohohoh";
	char	s2[30] = "hahahahah";

	i = 0;
	j = 0;
	ft_strcmp(s1, s2);
	printf ("%s\n", s1);
	return (0);
}*/
