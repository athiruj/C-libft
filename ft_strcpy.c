/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:02:47 by athi              #+#    #+#             */
/*   Updated: 2024/06/15 23:15:14 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
		dest[index] = src[index++];
	dest[index] = '\0';
	return (dest);
}