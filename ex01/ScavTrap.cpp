/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:59:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 15:58:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
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
        srand(static_cast<unsigned>(time(NULL)));
        cout(": Hi!");
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
        srand(static_cast<unsigned>(time(NULL)));
        cout(": Hi!");
}

ScavTrap::ScavTrap(ScavTrap const& src) {
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    cout(": Good bye!");
}

ScavTrap&   ScavTrap::operator = (ScavTrap const& right) {
    if (this != &right) {
        this->hit_points_ = getHitPoints();
        this->max_hit_points_ = getMaxHitPoints();
        this->energy_points_ = getEnergyPoints();
        this->max_energy_points_ = getMaxEnergyPoints();
        this->level_ = getLevel();
        this->name_ = getName();
        this->melee_attack_damage_ = getMeleeAttackDamage();
        this->ranged_attack_damege_ = getRangedAttackDamege();
        this->armor_damage_reduction_ = getArmorDamageReduction();
        this->type_ = getType();
    }
    return (*this);
}

unsigned int    ScavTrap::getHitPoints(void) const {
    return (this->hit_points_);
}

unsigned int    ScavTrap::getMaxHitPoints(void) const {
    return (this->max_hit_points_);
}

unsigned int    ScavTrap::getEnergyPoints(void) const {
    return (this->energy_points_);
}

unsigned int    ScavTrap::getMaxEnergyPoints(void) const {
    return (this->max_energy_points_);
}

unsigned int    ScavTrap::getLevel(void) const {
    return (this->level_);
}

std::string ScavTrap::getName(void) const {
    return (this->name_);
}

unsigned int    ScavTrap::getMeleeAttackDamage(void) const {
    return (this->melee_attack_damage_);
}

unsigned int    ScavTrap::getRangedAttackDamege(void) const {
    return (this->ranged_attack_damege_);
}

unsigned int    ScavTrap::getArmorDamageReduction(void) const {
    return (this->armor_damage_reduction_);
}

std::string ScavTrap::getType(void) const {
    return (this->type_);
}

void    ScavTrap::rangeAttack(std::string const& target) {
    if (this->hit_points_ != 0) {
        cout() << "attacks " << target << " with range, causing ";
        std::cout << this->ranged_attack_damege_;
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't range attack.";
        std::cout << " Remaining hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ScavTrap::meleeAttack(std::string const& target) {
    if (this->hit_points_ != 0) {
        cout() << "attacks " << target << " with melee, causing ";
        std::cout << this->melee_attack_damage_;
        std::cout << " points of damage!" << std::endl;
    } else {
        cout() << "can't melee attack.";
        std::cout << " Remaining hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ScavTrap::takeDamage(unsigned int amount) {
    if (amount > this->armor_damage_reduction_) {
        unsigned int    damage = amount - this->armor_damage_reduction_;
        if (this->hit_points_ > damage) {
            this->hit_points_ -= damage;
            cout() << "took " << damage << " damage!";
            std::cout << " Remaining hit points is " << this->hit_points_;
            std::cout << "." << std::endl;
        } else {
            cout() << "took " << this->hit_points_ << " damage!";
            this->hit_points_ = 0;
            std::cout << " Remaining hit points is " << this->hit_points_;
            std::cout << "." << std::endl;
        }
    } else {
        cout() << "no damage!";
        std::cout << " Remaining hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount) {
    if (this->hit_points_ == this->max_hit_points_) {
        cout()<< "needs no repair.";
        std::cout << " Remaining hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    } else {
        unsigned int    tmp = this->hit_points_;
        this->hit_points_ += amount;
        if (this->hit_points_ >= this->max_hit_points_)
            this->hit_points_ = this->max_hit_points_;
        cout() << "has regained " << this->hit_points_ - tmp;
        std::cout << " hit points.";
        std::cout << " Remaining hit points is " << this->hit_points_;
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
    cout() << "had created " << challenge << " for " << target;
    std::cout << "." << std::endl;
}

std::ostream&    ScavTrap::cout(void) {
    return (std::cout << "SC4V-TP " << this->name_ << " ");
}

std::ostream&   ScavTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
