/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:17 by tom               #+#    #+#             */
/*   Updated: 2021/03/16 18:51:39 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 1)
	{
		return (0);
	}
	while (i * i < (unsigned int)nb)
	{
		i++;
	}
	if (i * i == (unsigned int)nb)
	{
		return (i);
	}
	return (0);
}
