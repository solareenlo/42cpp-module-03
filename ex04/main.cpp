/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 18:38:36 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
    FragTrap    fragTrap("Frag");
    NinjaTrap   ninjaTrap("Ninja");
    SuperTrap   superTrap("Super");

    std::cout << std::endl;
    std::cout << "Hit Points" << std::endl;
    std::cout << fragTrap.getHitPoints() << std::endl;
    std::cout << superTrap.getHitPoints() << std::endl;

    std::cout << "Max Hit Points" << std::endl;
    std::cout << fragTrap.getMaxHitPoints() << std::endl;
    std::cout << superTrap.getMaxHitPoints() << std::endl;

    std::cout << "Energy Points" << std::endl;
    std::cout << ninjaTrap.getEnergyPoints() << std::endl;
    std::cout << superTrap.getEnergyPoints() << std::endl;

    std::cout << "Max Energy Points" << std::endl;
    std::cout << ninjaTrap.getMaxEnergyPoints() << std::endl;
    std::cout << superTrap.getMaxEnergyPoints() << std::endl;

    std::cout << "Melee Attack Damage" << std::endl;
    std::cout << ninjaTrap.getMeleeAttackDamage() << std::endl;
    std::cout << superTrap.getMeleeAttackDamage() << std::endl;

    std::cout << "Ranged Attack Damage" << std::endl;
    std::cout << fragTrap.getRangedAttackDamege() << std::endl;
    std::cout << superTrap.getRangedAttackDamege() << std::endl;

    std::cout << "Armor Damage Reduction" << std::endl;
    std::cout << fragTrap.getArmorDamageReduction() << std::endl;
    std::cout << superTrap.getArmorDamageReduction() << std::endl;

    std::cout << std::endl;
    fragTrap.rangeAttack("A");
    superTrap.rangeAttack("A");
    ninjaTrap.meleeAttack("A");
    superTrap.meleeAttack("A");

    std::cout << std::endl;
    return (0);
}
