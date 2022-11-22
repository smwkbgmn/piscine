/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghki2 <donghki2@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:10:40 by donghki2          #+#    #+#             */
/*   Updated: 2022/05/25 19:28:28 by donghki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		cnt++;
	}
	write(1, str, cnt);
}