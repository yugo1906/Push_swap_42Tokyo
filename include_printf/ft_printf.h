/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:17:56 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/14 09:10:08 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
void	my_putnbr_and_increment(long long n, int fd, int *res_len);
void	my_putstr_and_increment(char *s, int fd, int *res_len);
void	put_address(unsigned long long n, char *base_16, int *res_len);
void	my_putchar_and_increment(char c, int fd, int *res_len);
void	put_base16(long long n, char *base_16, int *res_len);

#endif
