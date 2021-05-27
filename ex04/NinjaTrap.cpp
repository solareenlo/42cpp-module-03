/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:55:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 06:08:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamege(5);
    this->setArmorDamageReduction(0);
    this->setType("NI4N-TP");
    cout(": Hi in Sub Class!");
}

NinjaTrap::~NinjaTrap(void) {
    cout(": goodbye in Sub Class!");
}

void    NinjaTrap::rangeAttack(std::string const& target) {
    std::string range = "Tonjutsu";

    if (this->ClapTrap::getHitPoints() != 0) {
        cout() << "attacks " << target << " at " << range << " causing ";
        std::cout << this->ClapTrap::getRangedAttackDamege();
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't " << range << " attack.";
        std::cout << " Hit points is " << this->ClapTrap::getHitPoints();
        std::cout << "." << std::endl;
    }
}

void    NinjaTrap::meleeAttack(std::string const& target) {
    std::string melee = "Kama";

    if (this->ClapTrap::getHitPoints() != 0) {
        cout() << "attacks " << target << " at " << melee << " causing ";
        std::cout << this->ClapTrap::getMeleeAttackDamage();
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't " << melee << " attack.";
        std::cout << " Hit points is " << this->ClapTrap::getHitPoints();
        std::cout << "." << std::endl;
    }
}

void    NinjaTrap::ninjaShoebox(ClapTrap const& target) {
    cout() << "gave " << target.getName() << " a callot." << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const& target) {
    cout() << "gave " << target.getName() << " a cabbage." << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const& target) {
    cout() << "gave " << target.getName() << " a green pepper." << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap const& target) {
    cout() << "gave " << target.getName() << " a shuriken." << std::endl;
}

unsigned int    NinjaTrap::getInitHitPoints(void) {
    return (this->ninja_init_hit_points_);
}

unsigned int    NinjaTrap::getInitMaxHitPoints(void) {
    return (this->ninja_init_max_hit_points_);
}

unsigned int    NinjaTrap::getInitEnergyPoints(void) {
    return (this->ninja_init_energy_points_);
}

unsigned int    NinjaTrap::getInitMaxEnergyPoints(void) {
    return (this->ninja_init_max_energy_points_);
}

unsigned int    NinjaTrap::getInitLevel(void) {
    return (this->ninja_init_level_);
}

unsigned int    NinjaTrap::getInitMeleeAttackDamage(void) {
    return (this->ninja_init_melee_attack_damage_);
}

unsigned int    NinjaTrap::getInitRangedAttackDamage(void) {
    return (this->ninja_init_ranged_attack_damage_);
}

unsigned int    NinjaTrap::getInitArmorDamageReduction(void) {
    return (this->ninja_init_armor_damage_reduction_);
}
