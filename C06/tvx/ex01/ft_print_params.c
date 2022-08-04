/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:48:18 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/28 20:00:22 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str [++i])
		ft_putchar(str[i]);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
		
	ft_putstr (argv[1]);
	ft_putchar('\n');
	ft_putstr (argv[2]);
	ft_putchar('\n');
	ft_putstr (argv[3]);
	ft_putchar('\n');

	return (0);
}
