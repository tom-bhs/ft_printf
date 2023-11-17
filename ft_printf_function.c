/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:00:34 by tom               #+#    #+#             */
/*   Updated: 2023/11/18 00:03:27 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
		count++;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
	return (count + 1);
}
