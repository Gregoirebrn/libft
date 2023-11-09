/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:09:40 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/09 12:10:51 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (0 <= i)
	{
		if (c == ((char *)s)[i])
			return (((char *)s) + i);
		i--;
	}
	return ((char *)s);
}
