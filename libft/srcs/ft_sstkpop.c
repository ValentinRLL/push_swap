/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstkpop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:50:19 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/02 19:05:28 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_sstkpop(t_sstack *stk)
{
	if (stk->sp == 0)
		return (0);
	return (stk->stack[--(stk->sp)]);
}