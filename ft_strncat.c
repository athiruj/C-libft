/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:00:59 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:15:57 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;

	while (dest[size] != '\0')
		size++;
	while (*src && nb--)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (dest);
}
