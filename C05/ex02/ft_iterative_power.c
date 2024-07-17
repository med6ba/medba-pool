/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:16:15 by mohben-a          #+#    #+#             */
/*   Updated: 2024/07/14 14:17:49 by mohben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	resultat = 1;
	i = 0;
	while (i < power)
	{
		resultat = resultat * nb;
		i++;
	}
	if (nb == 0 && power == 0)
		resultat = 1;
	else if (power < 0)
		resultat = 0;
	return (resultat);
}
