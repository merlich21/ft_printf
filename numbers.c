/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:09:43 by merlich           #+#    #+#             */
/*   Updated: 2021/11/13 22:50:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_len(long long num, int base)
{
	int	len;

	len = 0;
	if (num < 0)
		len = 2;
	else
		len = 1;
	while (num / base != 0)
	{
		num = num / base;
		len++;
	}
	return (len);
}

int	ft_unsigned_num_len(unsigned long long num, int base)
{
	int	len;

	len = 1;
	while (num / base != 0)
	{
		num = num / base;
		len++;
	}
	return (len);
}

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;

	if (n == 4294967295)
		write(fd, "4294967295", 10);
	else
	{
		if (n / 10 != 0)
		{
			ft_putnbr_unsigned_fd(n / 10, fd);
		}
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}

int	ft_int_dec(int num, int fd)
{
	int	base;

	base = 10;
	ft_putnbr_fd(num, fd);
	return (ft_num_len(num, base));
}

int	ft_uint(unsigned long long num, int fd)
{
	int	base;

	base = 10;
	ft_putnbr_unsigned_fd(num, fd);
	return (ft_num_len(num, base));
}

int	ft_putnbr_hex_fd(unsigned long long num, int flag, int fd)
{
	int	base;

	base = 16;
	if (num / 16 != 0)
	{
		ft_putnbr_hex_fd(num / 16, flag, fd);
	}
	if (num % 16 < 10)
	{
		ft_putnbr_fd(num % 16, fd);
	}
	else
	{
		if (flag == 0)
		{
			ft_putchar_fd(num % 16 - 10 + 'a', fd);
		}
		else if (flag == 1)
		{
			ft_putchar_fd(num % 16 - 10 + 'A', fd);
		}
	}
	return (ft_unsigned_num_len(num, base));
}
