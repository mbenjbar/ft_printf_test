/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:58:28 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/12/07 14:13:48 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *s, int *count)
{
	if (!s)
		s = "(NULL)";
	while (*s)
	{
		write(1, &*s, 1);
		(count)++;
		s++;
	}
}
