/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpidance <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:35:04 by cpidance          #+#    #+#             */
/*   Updated: 2024/07/05 14:29:49 by cpidance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_ptr);
}

/*int	main(void)
{
	char	src[] = "hop swiss";
	char	dest[15];

	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
