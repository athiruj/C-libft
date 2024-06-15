/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:21:06 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:16:15 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	t1;
	unsigned char	t2;

	while (n-- > 0)
	{
		t1 = (unsigned char)*s1++;
		t2 = (unsigned char)*s2++;
		if (t1 != t2)
			return (t1 - t2);
		if (t1 == '\0')
			return (0);
	}
	return (0);
}
