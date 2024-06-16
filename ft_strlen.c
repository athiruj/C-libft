/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:30:53 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/16 19:04:58 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str++)
		index++;
	return (index);
}

int	ft_recursive_strlen(char *str)
{
	if (!*str)
		return (0);
	return (ft_strlen(str + 1) + 1);
}