/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:31:48 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/13 13:50:17 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}
