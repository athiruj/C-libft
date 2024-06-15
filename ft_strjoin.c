/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:58:22 by athi              #+#    #+#             */
/*   Updated: 2024/06/16 00:01:23 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// incomplete
#include <stdlib.h>

char	*ft_strj   oin(int size, char **strs, char *sep);

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int ft_fullstrlen(int size, char **strs, char * sep)
{
	int	i;
	int full_len;

	i = 0;
	full_len = 0;
	while (i < size)
		full_len += ft_strlen(strs[i++]);
	full_len += ft_strlen(sep) * (size - 1);
	return (full_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int full_len;
	char *remind;
	char *result;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	full_len = ft_fullstrlen(size , strs, sep);
	result = (char *) malloc(sizeof(char) * (full_len + 1));
	if (!result)
		return (0);
	remind = result;
	i = 0;
	while (i < size)
	{
		ft_strcpy(remind, strs[i]);
		remind += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(remind, sep);
			remind += ft_strlen(sep);
		}
	}
	*remind = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;

// 	size = 3;
// 	strs = (char **)malloc(3 * sizeof(char *));
// 	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
// 	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
// 	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
// 	strs[0] = "Hello";
// 	strs[1] = "friend,";
// 	strs[2] = "you are awesome";
// 	separator = " ";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s$\n", result);
// 	free(result);
// }
