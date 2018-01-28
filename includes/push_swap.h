/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:33:00 by cvermand          #+#    #+#             */
/*   Updated: 2018/01/28 18:26:51 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "../libft/includes/libft.h"

typedef struct		s_options
{
	int				v;
	int				d;
	int				r;
	int				nbr;
}					t_options;

typedef struct		s_ins
{
	char			name;
	int				pos;
	struct s_opp	*before;
	struct s_opp	*next;
}					t_ins;

typedef struct		s_tab
{
	int				*stack_a;
	int				index_a;
	int				*stack_b;
	int				index_b;
	int				size;
	t_options		*options;
	t_ins			*opp;
}					t_tab;

/*
 * ----- PARSING -----
 *  
 * OPTIONS
 */
void			parse_checker_options(int ac, char **av, t_options *options);
int				is_checker_option(char *s, t_options *options);
/*
 * ERROR PARSING
 */
int				parse_arguments(int ac, char **av, t_options *opt, t_tab *tab);
int				check_for_dubble(t_tab *tab);

/*
 * TAB STRUCTURE
 */ 
t_tab			*parse_tab_struct(char **av, t_options *opt, t_tab *tab);


#endif
