/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 15:00:04 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap    fragTrap("A");

    fragTrap.rangeAttack("B");
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(100);
    fragTrap.meleeAttack("B");
    fragTrap.beRepaired(10);
    return (0);
}
