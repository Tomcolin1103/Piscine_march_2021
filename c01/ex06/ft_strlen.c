/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:24:50 by tcolin            #+#    #+#             */
/*   Updated: 2021/03/08 15:37:11 by tcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (str[i] != '\0')
	{
		compteur++;
		i++;
	}
	return (compteur);
}
