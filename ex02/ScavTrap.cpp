/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:59:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 16:50:54 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap() {
    srand(static_cast<unsigned>(time(NULL)));
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setName("Monban");
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamege(15);
    this->setArmorDamageReduction(3);
    this->setType("SC4V-TP");
    cout(": Hi in Sub Class!");
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    srand(static_cast<unsigned>(time(NULL)));
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamege(15);
    this->setArmorDamageReduction(3);
    this->setType("SC4V-TP");
    cout(": Hi in Sub Class!");
}

ScavTrap::ScavTrap(ScavTrap const& src) {
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    cout(": goodbye in Sub Class!");
}

ScavTrap&   ScavTrap::operator = (ScavTrap const& right) {
    if (this != &right) {
        this->setHitPoints(right.getHitPoints());
        this->setMaxHitPoints(right.getMaxHitPoints());
        this->setEnergyPoints(right.getEnergyPoints());
        this->setMaxEnergyPoints(right.getMaxEnergyPoints());
        this->setLevel(right.getLevel());
        this->setName(right.getName());
        this->setMeleeAttackDamage(right.getMeleeAttackDamage());
        this->setRangedAttackDamege(right.getRangedAttackDamege());
        this->setArmorDamageReduction(right.getArmorDamageReduction());
        this->setType(right.getType());
    }
    return (*this);
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
