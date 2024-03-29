/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 02:43:24 by smatsuo           #+#    #+#             */
/*   Updated: 2023/08/20 00:30:49 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	at_a(t_stack *stack, int index)
{
	t_node	*res;

	if (stack == NULL)
		return (-1);
	res = stack->top_a;
	if (res == NULL)
		return (-1);
	while (index-- > 0)
		res = res->next;
	return (res->value);
}

int	at_b(t_stack *stack, int index)
{
	t_node	*res;

	if (stack == NULL)
		return (-1);
	res = stack->top_b;
	if (res == NULL)
		return (-1);
	while (index-- > 0)
		res = res->next;
	return (res->value);
}
