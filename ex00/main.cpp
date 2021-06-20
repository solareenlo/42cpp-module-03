/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/20 11:25:28 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    FragTrap    fragTrap("A");

    fragTrap.rangeAttack("B");
    fragTrap.meleeAttack("B");
    std::cout << std::endl;

    fragTrap.takeDamage(10);
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(100);
    std::cout << std::endl;

    fragTrap.meleeAttack("B");
    std::cout << std::endl;

    fragTrap.beRepaired(10);
    fragTrap.beRepaired(100);
    fragTrap.beRepaired(100);
    std::cout << std::endl;

    fragTrap.vaulthunter_dot_exe("B");
    fragTrap.vaulthunter_dot_exe("C");
    fragTrap.vaulthunter_dot_exe("D");
    fragTrap.vaulthunter_dot_exe("E");
    fragTrap.vaulthunter_dot_exe("F");
    fragTrap.vaulthunter_dot_exe("G");
    std::cout << std::endl;

    fragTrap.takeDamage(200);
    fragTrap.vaulthunter_dot_exe("G");
    return (0);
}
