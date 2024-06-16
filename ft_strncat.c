/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:00:59 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/16 18:57:26 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	while (*src && nb--)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (dest);
}
