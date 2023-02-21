/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:04:28 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/15 13:04:29 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//memoria dinamica (heap), uso de new y delete porque la funcion devuelve un puntero
//tengo que establecer el tamaño del puntero

Zombie* newZombie(std::string name)
{
    return (new Zombie(name));
}