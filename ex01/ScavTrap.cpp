/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/21 03:17:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(50),
    max_energy_points_(50),
    level_(1),
    name_("Monban"),
    melee_attack_damage_(20),
    ranged_attack_damege_(15),
    armor_damage_reduction_(3),
    type_("SC4V-TP") {
        cout(": Hi! I love to guard the gate and 42!");
}

ScavTrap::~ScavTrap() {
    cout(": Good bye! I was happy to guard the gate.");
}

ScavTrap::ScavTrap(std::string const& name) :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(50),
    max_energy_points_(50),
    level_(1),
    name_(name),
    melee_attack_damage_(20),
    ranged_attack_damege_(15),
    armor_damage_reduction_(3),
    type_("SC4V-TP") {
        cout(": Hi! I love to open the gate and 42!");
}

ScavTrap::ScavTrap(ScavTrap const& src) {
    this->operator=(src);
    cout(": Hi! I love to watch videos and 42!");
}

ScavTrap&   ScavTrap::operator=(ScavTrap const& rhs) {
    if (this != &rhs) {
        this->hit_points_ = rhs.getHitPoints();
        this->max_hit_points_ = rhs.getMaxHitPoints();
        this->energy_points_ = rhs.getEnergyPoints();
        this->max_energy_points_ = rhs.getMaxEnergyPoints();
        this->level_ = rhs.getLevel();
        this->name_ = rhs.getName();
        this->melee_attack_damage_ = rhs.getMeleeAttackDamage();
        this->ranged_attack_damege_ = rhs.getRangedAttackDamege();
        this->armor_damage_reduction_ = rhs.getArmorDamageReduction();
        this->type_ = rhs.getType();
    }
    return (*this);
}

unsigned int    ScavTrap::getHitPoints() const {
    return (this->hit_points_);
}

unsigned int    ScavTrap::getMaxHitPoints() const {
    return (this->max_hit_points_);
}

unsigned int    ScavTrap::getEnergyPoints() const {
    return (this->energy_points_);
}

unsigned int    ScavTrap::getMaxEnergyPoints() const {
    return (this->max_energy_points_);
}

unsigned int    ScavTrap::getLevel() const {
    return (this->level_);
}

std::string ScavTrap::getName() const {
    return (this->name_);
}

unsigned int    ScavTrap::getMeleeAttackDamage() const {
    return (this->melee_attack_damage_);
}

unsigned int    ScavTrap::getRangedAttackDamege() const {
    return (this->ranged_attack_damege_);
}

unsigned int    ScavTrap::getArmorDamageReduction() const {
    return (this->armor_damage_reduction_);
}

std::string ScavTrap::getType() const {
    return (this->type_);
}

void    ScavTrap::setHitPoints(unsigned int amount) {
    this->hit_points_ = amount;
}

void    ScavTrap::setEnergyPoints(unsigned int amount) {
    this->energy_points_ = amount;
}

void    ScavTrap::rangeAttack(std::string const& target) {
    if (this->getHitPoints() > 0) {
        cout() << "attacks " << target << " at range, causing "
        << this->getRangedAttackDamege() << " points of damage!" << std::endl;
    } else {
        cout() << "can't range attack. Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

void    ScavTrap::meleeAttack(std::string const& target) {
    if (this->getHitPoints() > 0) {
        cout() << "attacks " << target << " at melee, causing "
            << this->getMeleeAttackDamage() << " points of damage!"
            << std::endl;
    } else {
        cout() << "can't melee attack. Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

void    ScavTrap::takeDamage(unsigned int amount) {
    if (amount > this->getArmorDamageReduction()) {
        unsigned int    damage = amount - this->getArmorDamageReduction();
        if (this->getHitPoints() > damage) {
            this->setHitPoints(this->getHitPoints() - damage);
            cout() << "took " << damage << " damage! Hit points is "
                << this->getHitPoints() << "." << std::endl;
        } else {
            cout() << "took " << this->getHitPoints() << " damage!";
            this->setHitPoints(0);
            std::cout << " Hit points is " << this->getHitPoints()
                << "." << std::endl;
        }
    } else {
        cout() << "no damage! Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount) {
    if (this->getHitPoints() == this->getMaxHitPoints()
            && this->getEnergyPoints() == this->getMaxEnergyPoints()) {
        cout()<< "needs no repair. Hit points is " << this->getHitPoints()
            << ", Enegy points is " << this->getEnergyPoints()
            << "." << std::endl;
    } else {
        if (this->getHitPoints() != this->getMaxHitPoints()) {
            unsigned int    tmp = this->getHitPoints();
            if (this->getMaxHitPoints() - this->getHitPoints() <= amount)
                this->setHitPoints(this->getMaxHitPoints());
            else
                this->setHitPoints(this->getHitPoints() + amount);
            cout() << "has regained " << this->getHitPoints() - tmp
                << " hit points. Hit points is " << this->getHitPoints()
                << "." << std::endl;
            if (tmp == 0)
                cout() << "can be fight again. Oh, Yes!" << std::endl;
        } else {
            cout() << "has " << this->getHitPoints()
                << " hit points." << std::endl;
        }

        if (this->getEnergyPoints() != this->getMaxEnergyPoints()) {
            unsigned int tmp = this->getEnergyPoints();
            if (this->getMaxEnergyPoints() - this->getEnergyPoints() <= amount)
                this->setEnergyPoints(this->getMaxEnergyPoints());
            else
                this->setEnergyPoints(this->getEnergyPoints() + amount);
            cout() << "has regained " << this->getEnergyPoints() - tmp
                << " energy points. Energy points is "
                << this->getEnergyPoints() << "." << std::endl;
            if (this->getHitPoints() > 0
                    && tmp < 25
                    && this->getEnergyPoints() >= 25)
                cout() << "can be special attack again. Cammmmon!" << std::endl;
        } else {
            cout() << "has " << this->getEnergyPoints()
                << " energy points." << std::endl;
        }
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
    if (this->getHitPoints() > 0) {
        if (this->getEnergyPoints() >= 25) {
            this->setEnergyPoints(this->getEnergyPoints() - 25);
            cout() << "had created " << challenge << " for " << target
                << ". Energy points is " << this->getEnergyPoints()
                << "." << std::endl;
        } else {
            cout() << "dose not have enough energy. Energy points is "
                << this->getEnergyPoints() << "." << std::endl;
        }
    } else {
        cout() << "can't create " << challenge << " for " << target
            << ". Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

std::ostream&    ScavTrap::cout() {
    return (std::cout << this->getType() << " " << this->getName() << " ");
}

std::ostream&   ScavTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
