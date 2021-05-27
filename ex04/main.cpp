/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 06:36:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
    FragTrap    fragTrap("Frag");
    NinjaTrap   ninjaTrap("Ninja");
    SuperTrap   superTrap("Super");

    srand(static_cast<unsigned>(time(NULL)));
    std::cout << fragTrap.getHitPoints() << std::endl;
    std::cout << superTrap.getHitPoints() << std::endl;
    std::cout << fragTrap.getMaxHitPoints() << std::endl;
    std::cout << superTrap.getMaxHitPoints() << std::endl;
    std::cout << ninjaTrap.getEnergyPoints() << std::endl;
    std::cout << superTrap.getEnergyPoints() << std::endl;
    std::cout << ninjaTrap.getMaxEnergyPoints() << std::endl;
    std::cout << superTrap.getMaxEnergyPoints() << std::endl;
    std::cout << ninjaTrap.getMeleeAttackDamage() << std::endl;
    std::cout << superTrap.getMeleeAttackDamage() << std::endl;
    std::cout << fragTrap.getRangedAttackDamege() << std::endl;
    std::cout << superTrap.getRangedAttackDamege() << std::endl;
    std::cout << fragTrap.getArmorDamageReduction() << std::endl;
    std::cout << superTrap.getArmorDamageReduction() << std::endl;
    fragTrap.rangeAttack("A");
    superTrap.rangeAttack("A");
    ninjaTrap.meleeAttack("A");
    superTrap.meleeAttack("A");
    return (0);
}
