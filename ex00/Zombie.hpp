/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:04:06 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/15 13:04:08 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

//Es mejor el uso de memoria en stack porque el tamaño de memoria que necesito es pequeño (variables)
//No necesito cambiar el tamaño de las variables y el acceso es más rápido

class   Zombie {
private:
    std::string name;
    void    announce(void);

public:
    Zombie();
    ~Zombie();

    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);
};

#endif
