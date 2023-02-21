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

class   Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie();

    void    announce(void);
};

#endif
