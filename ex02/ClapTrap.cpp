/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:07:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 06:58:19 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name) :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(100),
    max_energy_points_(100),
    level_(1),
    name_(name),
    melee_attack_damage_(10),
    ranged_attack_damege_(10),
    armor_damage_reduction_(10),
    type_("CL4G-TP") {
    std::cout << name << " : Hi in Super Class!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    cout(": goodbye in Super Class!");
}

void    ClapTrap::rangeAttack(std::string const& target) {
    if (this->hit_points_ != 0) {
        cout() << "attacks " << target << " at range, causing ";
        std::cout << this->ranged_attack_damege_;
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't range attack.";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ClapTrap::meleeAttack(std::string const& target) {
    if (this->hit_points_ != 0) {
        cout() << "attacks " << target << " at melee, causing ";
        std::cout << this->melee_attack_damage_;
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't melee attack.";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->armor_damage_reduction_) {
        unsigned int    damage = amount - this->armor_damage_reduction_;
        if (this->hit_points_ > damage) {
            this->hit_points_ -= damage;
            cout() << "took " << damage << " damage!";
            std::cout << " Hit points is " << this->hit_points_;
            std::cout << "." << std::endl;
        } else {
            cout() << "took " << this->hit_points_ << " damage!";
            this->hit_points_ = 0;
            std::cout << " Hit points is " << this->hit_points_;
            std::cout << "." << std::endl;
        }
    } else {
        cout() << "no damage!";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->hit_points_ == this->max_hit_points_) {
        cout()<< "needs no repair.";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    } else {
        unsigned int    tmp = this->hit_points_;
        this->hit_points_ += amount;
        if (this->hit_points_ >= this->max_hit_points_)
            this->hit_points_ = this->max_hit_points_;
        cout() << "has regained " << this->hit_points_ - tmp;
        std::cout << " hit points.";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

unsigned int    ClapTrap::getHitPoints(void) {
    return (this->hit_points_);
}

unsigned int    ClapTrap::getMaxHitPoints(void) {
    return (this->max_hit_points_);
}

unsigned int    ClapTrap::getEnergyPoints(void) {
    return (this->energy_points_);
}

unsigned int    ClapTrap::getMaxEnergyPoints(void) {
    return (this->max_energy_points_);
}

unsigned int    ClapTrap::getLevel(void) {
    return (this->level_);
}

unsigned int    ClapTrap::getMeleeAttackDamage(void) {
    return (this->melee_attack_damage_);
}

unsigned int    ClapTrap::getRangedAttackDamege(void) {
    return (this->ranged_attack_damege_);
}

unsigned int    ClapTrap::getArmorDamageReduction(void) {
    return (this->armor_damage_reduction_);
}

void    ClapTrap::setHitPoints(unsigned int val) {
    this->hit_points_ = val;
}

void    ClapTrap::setMaxHitPoints(unsigned int val) {
    this->max_hit_points_ = val;
}

void    ClapTrap::setEnergyPoints(unsigned int val) {
    this->energy_points_ = val;
}

void    ClapTrap::setMaxEnergyPoints(unsigned int val) {
    this->max_energy_points_ = val;
}

void    ClapTrap::setLevel(unsigned int val) {
    this->level_ = val;
}

void    ClapTrap::setMeleeAttackDamage(unsigned int val) {
    this->melee_attack_damage_ = val;
}

void    ClapTrap::setRangedAttackDamege(unsigned int val) {
    this->ranged_attack_damege_ = val;
}

void    ClapTrap::setArmorDamageReduction(unsigned int val) {
    this->armor_damage_reduction_ = val;
}

void    ClapTrap::setType(std::string type) {
    this->type_ = type;
}

std::ostream&    ClapTrap::cout(void) {
    return (std::cout << this->type_ << " " << this->name_ << " ");
}

std::ostream&   ClapTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
