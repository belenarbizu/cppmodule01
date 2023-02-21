/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:03:55 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/15 13:03:56 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie* z_n = newZombie("Bah");
    z_n->announce();

    randomChump("Foo");

    delete z_n;

    return (0);
}