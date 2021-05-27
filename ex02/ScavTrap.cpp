/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:59:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 20:20:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
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

ScavTrap::~ScavTrap(void) {
    cout(": goodbye in Sub Class!");
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
