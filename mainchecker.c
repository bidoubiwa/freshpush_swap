/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainchecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:17:11 by cvermand          #+#    #+#             */
/*   Updated: 2018/01/28 18:42:34 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		entry_errors(int ac,char **av,t_options *options,t_tab *tab)
{
	if (ac == 1)
		return (0);
	parse_checker_options(ac, av, options);
	if (!(parse_arguments(ac, av, options, tab)))
		return (0);
	return (1);
}

int		checker(t_tab *tab)
{
	char *line;

	while (get_next_line(0,&line))
	{
		
	}
}

int		main(int ac, char **av)
{
	t_tab		tab;
	t_options	options;
	
	if(!(entry_errors(ac, av, &options, &tab)))
		return (ft_printf("Error\n"));
	if (!(checker(tab)))
		return (ft_printf("Error\n"));
	return (0);
}
