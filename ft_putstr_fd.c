/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:39:16 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/08 16:33:04 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
		write(fd, s++, 1);
}
/*
int	main()
{

	int fd = open("test.txt", O_WRONLY);
	char *str = NULL;
	ft_putstr_fd(str, fd);
	printf("\n%s\n", str);
	return (0);
}
*/
