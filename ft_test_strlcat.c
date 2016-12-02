/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:57:03 by amacieje          #+#    #+#             */
/*   Updated: 2016/12/02 12:27:11 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void		ft_putnbr(int n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
void		ft_putstr(char const *s);

void	*ft_test_strlcat(void)
{
	char	src[] = "2Code4U";
	char	dst[20] = "42Born";
	char	src2[] = "2Code4U";
	char	dst2[20] = "42Born";
	int		i;

	i = 0;
	ft_putstr("ft_strlcat return value : ");
	ft_putnbr(ft_strlcat(dst, src, 0));
	ft_putstr("\ndst after ft_strlcat : ");
	ft_putstr(dst);
	ft_putstr("\ndst casted in int : ");
	while (i <= ft_strlen(dst))
	{
		ft_putnbr(dst[i]);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("\nstrlcat return value : ");
	ft_putnbr(strlcat(dst2, src2, 0));
	ft_putstr("\ndst2 after strlcat : ");
	ft_putstr(dst2);
	ft_putstr("\ndst2 casted in int : ");
	i = 0;
	while (i <= ft_strlen(dst2))
	{
		ft_putnbr(dst2[i]);
		ft_putstr(" ");
		i++;
	}
	return (0);
}
