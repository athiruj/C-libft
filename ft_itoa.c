
#include <stdlib.h>

// count the number of digits in int.
int	ft_nbrlen(int nbr)
{
	int	len;

	len = 1;
	nbr /= 10;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	short			re;
	unsigned short	len;
	char			*result;

	re = 0;
	if (nbr < 0)
		re++;
	len = ft_nbrlen(nbr) + re;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (re == 1)
		result[0] = '-';
	while (len - re)
	{
		result[--len] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}
