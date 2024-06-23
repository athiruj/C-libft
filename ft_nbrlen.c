int ft_nbrlen(unsigned int nbr)
{
    int len;

    len = 1;
    while (nbr /= 10)
        len++;
    return (len);
}