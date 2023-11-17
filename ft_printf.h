/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 01:24:30 by tom               #+#    #+#             */
/*   Updated: 2023/11/17 19:19:29 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

int 	ft_putchar(int c);
int 	ft_putstr(char *str);
int 	ft_format(va_list args, const char format);
int		ft_putnbr(int nb);

#endif