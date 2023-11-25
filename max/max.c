/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:03:23 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/23 16:55:01 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max( int *tab, unsigned int len)
{
	unsigned int	i;
	int	max_number;
	
	if (!len)
		return (0);
	
	i = 0;
	max_number = tab[0];
	while (i < len)
	{
		if (tab[i] > max_number)
		{
			max_number = tab[i];
		}
		i++;
	}
	return (max_number);
}
/* #include <stdio.h>

int	main()
{
	int result;
	int	example[7]= {-42, 0, -5, -64, -2, -68, -1};
	
	
	result = max(example, 7);
	printf("%d", result);
} */