/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:12:31 by smatsuo           #+#    #+#             */
/*   Updated: 2023/08/16 23:47:54 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Exit if an error occurs.
void	record_op_to_stack(t_stack *stack, t_op op)
{
	if (stack->op_list == NULL)
	{
		stack->op_list = new_op_list(op);
		if (stack->op_list == NULL)
		{
			destroy_stack(stack);
			exit_on_error();
		}
		return ;
	}
	if (append_op(stack->op_list, op) == NULL)
	{
		destroy_stack(stack);
		exit_on_error();
	}
}
