/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:59:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 17:46:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name) :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(50),
    max_energy_points_(50),
    level_(1),
    name_(name),
    melee_attack_damage_(20),
    ranged_attack_damege_(15),
    armor_damage_reduction_(3) {
        return;
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

ScavTrap::~ScavTrap(void) {
}

std::ostream&    ScavTrap::cout(void) {
    return (std::cout << "SC4V-TP " << this->name_ << " ");
}

std::ostream&   ScavTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
