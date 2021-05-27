/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 20:20:52 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamege(25);
    this->setArmorDamageReduction(5);
    this->setType("FR4G-TP");
    cout(": Hi in Sub Class!");
}

FragTrap::~FragTrap(void) {
    cout(": goodbye in Sub Class!");
}

void    FragTrap::vaulthunter_dot_exe(std::string const& target) {
    static const std::string    magics[] = {
        "fire", "ice", "thunder", "wind", "water"
    };
    static const unsigned int   damages[] = {
        1, 2, 3, 4, 5
    };
    int magic_size = sizeof(magics) / sizeof(magics[0]);
    int damage_size = sizeof(damages) / sizeof(damages[0]);
    std::string magic = magics[rand() % magic_size];
    unsigned int damage = damages[rand() % damage_size];

    if (this->getHitPoints() != 0) {
        if (this->getEnergyPoints() >= 25) {
            this->setEnergyPoints(this->getEnergyPoints() - 25);
            cout() << "attacks " << target << " at " << magic;
            std::cout <<", causing " << damage << " points of damage!";
            std::cout << " Energy points is " << this->getEnergyPoints();
            std::cout << "." << std::endl;
        } else {
            cout() << "dose not have enough energy.";
            std::cout << " Energy points is " << this->getEnergyPoints();
            std::cout << "." << std::endl;
        }
    } else {
        cout() << "can't " << magic << " attack.";
        std::cout << " Hit points is " << this->getHitPoints();
        std::cout << "." << std::endl;
    }
}
