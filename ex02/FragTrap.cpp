/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 17:25:46 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap() {
    srand(static_cast<unsigned>(time(NULL)));
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setName("Tachikoma");
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamege(25);
    this->setArmorDamageReduction(5);
    this->setType("FR4G-TP");
    cout(": Hi in Sub Class!");
}

FragTrap::FragTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    srand(static_cast<unsigned>(time(NULL)));
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

FragTrap::FragTrap(FragTrap const& src) {
    *this = src;
}

FragTrap::~FragTrap(void) {
    cout(": goodbye in Sub Class!");
}

FragTrap&   FragTrap::operator = (FragTrap const& right) {
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

void    FragTrap::rangeAttack(std::string const& target) {
    std::string range = "Grenade";

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

void    FragTrap::meleeAttack(std::string const& target) {
    std::string melee = "Knife";

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
