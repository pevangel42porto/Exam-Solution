/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:48:29 by jaleman           #+#    #+#             */
/*   Updated: 2023/11/20 16:34:02 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

int		ft_atoi_base(const char *str, int base)
{
	int		i;
	int		nbr;
	int		sign;

	if (!str[0] || (base < 2 || base > 16))
		return (0);
	nbr = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:37:30 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/20 16:32:37 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbr_base(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	signal = 1;
	int	nbr;

	if (!str[0] || (str_base < 2 || str_base > 16))
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			signal = str[i] * -1;
	}
	while (str[i] && ft_nbr_base(str[i], str_base))
	{
	if (str[i] >= 'A' && str[i] <= 'F')
		nbr = (nbr * str_base) + (str[i] - 'A' + 10);
	else if (str[i] >= 'a' && str[i] <= 'f')
		nbr = (nbr * str_base) + (str[i] - 'a' + 10);
	else
		nbr =  (nbr * str_base) + (str[i] - '0');
	i++;
	}
	return (nbr * signal);
}

#include <stdio.h>
int main() {
    // Example usage:
    const char *hexadecimalStr = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base."; // "1a" in base 16 is equivalent to 26 in base 10
    int result = ft_atoi_base(hexadecimalStr, 16);

    printf("Result: %d\n", result);
}
			nbr = (nbr * base) + (str[i] - '0');
		i += 1;
	}
	return (nbr * sign);
}
