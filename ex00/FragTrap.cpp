/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/20 22:52:22 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(100),
    max_energy_points_(100),
    level_(1),
    name_("Tachikoma"),
    melee_attack_damage_(30),
    ranged_attack_damege_(20),
    armor_damage_reduction_(5),
    type_("FR4G-TP") {
        cout(": Hi!");
}

FragTrap::~FragTrap() { cout(": Good bye!"); }

FragTrap::FragTrap(std::string const& name) :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(100),
    max_energy_points_(100),
    level_(1),
    name_(name),
    melee_attack_damage_(30),
    ranged_attack_damege_(20),
    armor_damage_reduction_(5),
    type_("FR4G-TP") {
        cout(": Hi!");
}

FragTrap::FragTrap(FragTrap const& src) {
    this->operator=(src);
    cout(": Hi!");
}

FragTrap&   FragTrap::operator=(FragTrap const& rhs) {
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

unsigned int    FragTrap::getHitPoints() const {
    return (this->hit_points_);
}

unsigned int    FragTrap::getMaxHitPoints() const {
    return (this->max_hit_points_);
}

unsigned int    FragTrap::getEnergyPoints() const {
    return (this->energy_points_);
}

unsigned int    FragTrap::getMaxEnergyPoints() const {
    return (this->max_energy_points_);
}

unsigned int    FragTrap::getLevel() const {
    return (this->level_);
}

std::string FragTrap::getName() const {
    return (this->name_);
}

unsigned int    FragTrap::getMeleeAttackDamage() const {
    return (this->melee_attack_damage_);
}

unsigned int    FragTrap::getRangedAttackDamege() const {
    return (this->ranged_attack_damege_);
}

unsigned int    FragTrap::getArmorDamageReduction() const {
    return (this->armor_damage_reduction_);
}

std::string FragTrap::getType() const {
    return (this->type_);
}

void    FragTrap::setHitPoints(unsigned int amount) {
    this->hit_points_ = amount;
}

void    FragTrap::setEnergyPoints(unsigned int amount) {
    this->energy_points_ = amount;
}

void    FragTrap::rangeAttack(std::string const& target) {
    if (this->getHitPoints() > 0) {
        cout() << "attacks " << target << " at range, causing "
        << this->getRangedAttackDamege() << " points of damage!" << std::endl;
    } else {
        cout() << "can't range attack. Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

void    FragTrap::meleeAttack(std::string const& target) {
    if (this->getHitPoints() > 0) {
        cout() << "attacks " << target << " at melee, causing "
            << this->getMeleeAttackDamage() << " points of damage!"
            << std::endl;
    } else {
        cout() << "can't melee attack. Hit points is " << this->getHitPoints()
            << "." << std::endl;
    }
}

void    FragTrap::takeDamage(unsigned int amount) {
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

void    FragTrap::beRepaired(unsigned int amount) {
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
        } else {
            cout() << "has " << this->getEnergyPoints()
                << " energy points." << std::endl;
        }
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

    if (this->getHitPoints() > 0) {
        if (this->getEnergyPoints() >= 25) {
            this->energy_points_ -= 25;
            cout() << "attacks " << target << " at " << magic
                <<", causing " << damage
                << " points of damage! Energy points is "
                << this->energy_points_ << "." << std::endl;
        } else {
            cout() << "dose not have enough energy. Energy points is "
                << this->getEnergyPoints() << "." << std::endl;
        }
    } else {
        cout() << "can't " << magic << " attack. Hit points is "
            << this->getHitPoints() << "." << std::endl;
    }
}

std::ostream&    FragTrap::cout() {
    return (std::cout << this->getType() << " " << this->getName() << " ");
}

std::ostream&   FragTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
