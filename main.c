/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:21:19 by rhiguita          #+#    #+#             */
/*   Updated: 2024/09/01 15:45:13 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*nl;
	char	*s = "Hola que tal %\n como estas ?";
	char	*s2 = ft_strjoin(nl, s);

	printf("%s", s2);
	return (0);
}
