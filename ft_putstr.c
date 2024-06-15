/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:24:26 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:25:48 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putstr_v1(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}
