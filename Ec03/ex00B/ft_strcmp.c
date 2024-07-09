/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:44:08 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 14:41:58 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
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
	char s1[20] = "hello";
	char s2[20] = "helio";

	i = 0;
	j = 0;
	ft_strcmp(s1, s2);
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
		write(1, &s2[j], 1);
		j++;
	}
	return (0);
}*/
