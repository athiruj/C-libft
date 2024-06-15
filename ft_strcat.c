/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:29:30 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:15:05 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	size;

	while (dest[size] != '\0')
		size++;
	while (*src)
		dest[size++] = *src++;
	dest[size] = '\0';
	return (dest);
}
