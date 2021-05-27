/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 05:03:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 16:50:45 by tayamamo         ###   ########.fr       */
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

void    FragTrap::meleeAttack(std::string const& target) {
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

void    FragTrap::takeDamage(unsigned int amount) {
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

void    FragTrap::beRepaired(unsigned int amount) {
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

    if (this->hit_points_ != 0) {
        if (this->energy_points_ >= 25) {
            this->energy_points_ -= 25;
            cout() << "attacks " << target << " at " << magic;
            std::cout <<", causing " << damage << " points of damage!";
            std::cout << " Energy points is " << this->energy_points_;
            std::cout << "." << std::endl;
        } else {
            cout() << "dose not have enough energy.";
            std::cout << " Energy points is " << this->energy_points_;
            std::cout << "." << std::endl;
        }
    } else {
        cout() << "can't " << magic << " attack.";
        std::cout << " Hit points is " << this->hit_points_;
        std::cout << "." << std::endl;
    }
}

std::ostream&    FragTrap::cout(void) {
    return (std::cout << "FR4G-TP " << this->name_ << " ");
}

std::ostream&   FragTrap::cout(std::string const& str) {
    return (cout() << str << std::endl);
}
