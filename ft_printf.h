/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:02:12 by merlich           #+#    #+#             */
/*   Updated: 2021/11/14 15:01:26 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_char(char c, int fd);
int		ft_string(char *str, int fd);
int		ft_num_len(long long num, int base);
int		ft_unsigned_num_len(unsigned long long num, int base);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
int		ft_uint(unsigned long long num, int fd);
int		ft_int_dec(int num, int fd);
int		ft_putnbr_h_fd(unsigned long long num, int flag, int fd);

#endif
