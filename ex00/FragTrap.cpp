/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 07:38:22 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name) :
    hit_points_(100),
    max_hit_points_(100),
    energy_points_(100),
    max_energy_points_(100),
    level_(1),
    name_(name),
    melee_attack_damage_(30),
    ranged_attack_damege_(20),
    armor_damage_reduction_(5) {
        cout(": Hi!");
        return;
}

FragTrap::~FragTrap(void) {
    cout(": Good bye!");
}

void    FragTrap::rangeAttack(std::string const& target) {
    cout() << "attacks " << target << " at range, causing ";
    std::cout << this->ranged_attack_damege_;
    std::cout << " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const& target) {
    cout() << "attacks " << target << " at melee, causing ";
    std::cout << this->melee_attack_damage_;
    std::cout << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount) {
    if (amount > this->armor_damage_reduction_) {
        unsigned int    damage = amount - this->armor_damage_reduction_;
        if (this->hit_points_ > damage) {
            this->hit_points_ -= damage;
            cout() << "took " << damage << " damage!" << std::endl;
            cout() << "have " << this->hit_points_;
            std::cout << " hit points remaining." << std::endl;
        } else {
            this->hit_points_ = 0;
            cout("is dead");
        }
    } else {
        cout() << "no damage!" << std::endl;
        cout() << "have " << this->hit_points_;
        std::cout << " hit points remaining." << std::endl;
    }
}

std::ostream&    FragTrap::cout(void) {
    return (std::cout << "FR4G-TP " << this->name_ << " ");
}

std::ostream&   FragTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
