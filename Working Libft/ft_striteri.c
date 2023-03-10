/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:15:45 by jkabelko          #+#    #+#             */
/*   Updated: 2023/01/20 11:21:13 by jkabelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_striteri ()- applies the function âfâ on each character of the string
passed as argument, passing its index as first argument. Each character is
passed by address to âfâ to be modified if necessary. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
