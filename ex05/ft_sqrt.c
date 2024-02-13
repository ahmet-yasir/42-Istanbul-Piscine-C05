/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:05:59 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/13 13:49:40 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	temp;

	temp = nb;
	if (temp <= 0)
		return (0);
	if (temp == 1)
		return (1);
	i = 2;
	if (temp >= 2)
	{
		while (i * i <= temp || i <= 46340)
		{
			if (i * i == temp)
				return (i);
			i++;
		}
	}
	return (0);
}
