/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:47:09 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/07 13:14:11 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	ptr[];

	*ptr = dest;
	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	unsigned int	n;
	char src [] = "hop swiss";
	char dest [15];

	n = 10;
	ft_strncpy(dest, src, n);
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
	return (0);
}*/
