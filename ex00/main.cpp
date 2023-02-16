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

int main(void)
{
    Zombie  z;

    Zombie* z_n = z.newZombie("Foo");
    z.randomChump("Foo");

    delete z_n;

    return (0);
}