/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:02:36 by athi              #+#    #+#             */
/*   Updated: 2024/06/15 23:21:48 by athi             ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	size;

	while (to_find[size] != '\0')
		size++;
	while (ft_strncmp(str, to_find, size)
		&& *++str);
	if (!(*str))
		return (0);
	return (str);
}
