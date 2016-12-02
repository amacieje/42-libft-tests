/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 10:48:33 by amacieje          #+#    #+#             */
/*   Updated: 2016/12/02 12:15:36 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putendl(char const *s);
void		ft_putnbr(int n);

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putendl(list->content);
		ft_putnbr((int)(list->content_size));
		list = list->next;
	}
}
