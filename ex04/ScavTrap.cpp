/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:59:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 06:48:44 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(this->getInitHitPoints());
    this->setMaxHitPoints(this->getInitMaxHitPoints());
    this->setEnergyPoints(this->getInitEnergyPoints());
    this->setMaxEnergyPoints(this->getInitMaxEnergyPoints());
    this->setLevel(this->getInitLevel());
    this->setMeleeAttackDamage(this->getInitMeleeAttackDamage());
    this->setRangedAttackDamege(this->getInitRangedAttackDamage());
    this->setArmorDamageReduction(this->getInitArmorDamageReduction());
    this->setType("SC4V-TP");
    cout(": Hi in Sub Class!");
}

ScavTrap::~ScavTrap(void) {
    cout(": goodbye in Sub Class!");
}

void    ScavTrap::rangeAttack(std::string const& target) {
    std::string range = "Machine gun";

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

void    ScavTrap::meleeAttack(std::string const& target) {
    std::string melee = "Beam";

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

void    ScavTrap::challengeNewcomer(std::string const& target) {
    const std::string challenges[] = {
        "ft_services",
        "netwhat",
        "ft_server",
        "dash999",
        "Exam Rank 42"
    };

    int size = sizeof(challenges) / sizeof(challenges[0]);
    std::string challenge = challenges[rand() % size];
    this->cout() << "had created " << challenge << " for " << target;
    std::cout << "." << std::endl;
}

unsigned int    ScavTrap::getInitHitPoints(void) {
    return (this->scav_init_hit_points_);
}

unsigned int    ScavTrap::getInitMaxHitPoints(void) {
    return (this->scav_init_max_hit_points_);
}

unsigned int    ScavTrap::getInitEnergyPoints(void) {
    return (this->scav_init_energy_points_);
}

unsigned int    ScavTrap::getInitMaxEnergyPoints(void) {
    return (this->scav_init_max_energy_points_);
}

unsigned int    ScavTrap::getInitLevel(void) {
    return (this->scav_init_level_);
}

unsigned int    ScavTrap::getInitMeleeAttackDamage(void) {
    return (this->scav_init_melee_attack_damage_);
}

unsigned int    ScavTrap::getInitRangedAttackDamage(void) {
    return (this->scav_init_ranged_attack_damage_);
}

unsigned int    ScavTrap::getInitArmorDamageReduction(void) {
    return (this->scav_init_armor_damage_reduction_);
}
