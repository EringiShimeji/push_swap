/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatsuo <smatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:47:41 by smatsuo           #+#    #+#             */
/*   Updated: 2023/07/13 00:01:17 by smatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_on_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	destory_stack_then_exit(t_stack	*stack)
{
	destory_stack(stack);
	exit_on_error();
}
