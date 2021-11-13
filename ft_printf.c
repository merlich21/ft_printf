/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:24:59 by merlich           #+#    #+#             */
/*   Updated: 2021/11/13 22:27:02 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_search(char *s, char c)
{
	int	start;
	int	length;

	start = 0;
	length = ft_strlen(s);
	while ((start < length) && (s[start] != c))
	{
		start = start + 1;
	}
	if (start == length)
	{
		return (-1);
	}
	return (start);
}

static int	ft_convert(va_list ap, char *pos, int index, int fd)
{
	char	conversion_specifier;

	conversion_specifier = *(pos + index + 1);
	if (conversion_specifier == 'c')
		return (ft_char((char) va_arg(ap, int), fd));
	else if (conversion_specifier == 's')
		return (ft_string(va_arg(ap, char *), fd));
	else if (conversion_specifier == 'p')
	{
		ft_putstr_fd("0x", fd);
		return (2 + ft_putnbr_hex_fd(va_arg(ap, unsigned long long int), 0, fd));
	}
	else if (conversion_specifier == 'd')
		return (ft_int_dec(va_arg(ap, int), fd));
	else if (conversion_specifier == 'i')
		return (ft_int_dec(va_arg(ap, int), fd));
	else if (conversion_specifier == 'u')
		return (ft_uint(va_arg(ap, unsigned int), fd));
	else if (conversion_specifier == 'x')
		return (ft_putnbr_hex_fd(va_arg(ap, unsigned int), 0, fd));
	else if (conversion_specifier == 'X')
		return (ft_putnbr_hex_fd(va_arg(ap, unsigned int), 1, fd));
	else if (conversion_specifier == '%')
		return (ft_char('%', fd));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		fd;
	int		counter;
	int		index;
	char	*pos;
	va_list	ap;

	fd = 1;
	counter = 0;
	if (NULL == format)
		return (-1);
	pos = (char *) format;
	index = ft_search(pos, '%');
	va_start(ap, format);
	/* error handler */
	while (index != -1)
	{
		write (1, pos, index);
		counter += index + ft_convert(ap, pos, index, fd);
		pos = pos + index + 2;
		index = ft_search(pos, '%');
	}
	ft_putstr_fd(pos, fd);
	counter += ft_strlen(pos);
	va_end(ap);
	return (counter);
}