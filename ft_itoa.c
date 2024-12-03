#include "libft.h"

int	ft_nbr_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (10);
	else if (n <= 0)
		i = 1;
	while (n > 0)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

int	ft_power(int nb, int power)
{
	int res;

	res = 1;
	if (power == 0 && nb == 0)
		return (res);
	else if (power < 0)
		return (0);
	while (power-- > 0)
		res *= nb;
	return (res);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*res;
	char	*start;

	len = 0;
	neg = 0;
	if (n < 0)
	{
		len++;
		neg = 1;
	}
	len += ft_nbr_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(res, "-2147483648", 12);
		return (res);
	}
	else if (n == 0)
	{
		ft_strlcpy(res, "0", 2);
		return (res);
	}
	start = res;
	if (neg == 1)
	{
		*res++ = '-';
		len--;
		n *= -1;
	}
	while (len > 0)
		*res++ = (n / ft_power(10, len-- - 1) % 10) + '0';
	return (start);
}

/*
int	main(void)
{
	char	*res;
	res = ft_itoa(0);
	printf("res: %s\n", res);
    return 0;
}
*/
