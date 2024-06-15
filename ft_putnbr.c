/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:20:11 by atkaewse          #+#    #+#             */
/*   Updated: 2024/06/15 23:52:04 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr_v1(int nb)
{
	int		d;
	int		n;
	char	arr[1];

	d = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == 0 || nb > 2147483647)
	{
		if (nb == 0)
			write(1, "0", 1);
		return ;
	}
	while (nb >= d)
		d *= 10;
	while (d != 1)
	{
		n = (nb % d) / (d / 10);
		arr[0] = '0' + n;
		write(1, arr, 1);
		d /= 10;
	}
}
