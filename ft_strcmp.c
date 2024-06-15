/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:38:45 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:14:00 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	t1;
	unsigned char	t2;

	while (*s1)
	{
		t1 = (unsigned char)*s1++;
		t2 = (unsigned char)*s2++;
		if (t1 != t2)
			return (t1 - t2);
	}
	return (0);
}