/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:04:41 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/15 13:04:43 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//memoria stack es más sencillo y rápido, no necesito reservar memoria heap

void    randomChump(std::string name)
{
    Zombie zz = Zombie(name);

    zz.announce();
}