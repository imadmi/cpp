/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:11:12 by imimouni          #+#    #+#             */
/*   Updated: 2023/06/10 12:11:13 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int	ac, char	*av[])
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			if (i > 1)
				std::cout << ' ';
			for (size_t j = 0; j < std::strlen(av[i]); j++)
			{
				std::cout << toupper(av[i][j]);
			}
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (EXIT_SUCCESS);
}
