/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:33:12 by okuznets          #+#    #+#             */
/*   Updated: 2017/12/27 19:34:22 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 == 0 || s2 == 0)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
