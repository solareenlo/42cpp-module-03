/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:55:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 19:33:47 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap::ClapTrap() {
    srand(static_cast<unsigned>(time(NULL)));
    this->setHitPoints(this->getInitHitPoints());
    this->setMaxHitPoints(this->getInitMaxHitPoints());
    this->setEnergyPoints(this->getInitEnergyPoints());
    this->setMaxEnergyPoints(this->getInitMaxEnergyPoints());
    this->setLevel(this->getInitLevel());
    this->setName(this->getInitName());
    this->setMeleeAttackDamage(this->getInitMeleeAttackDamage());
    this->setRangedAttackDamege(this->getInitRangedAttackDamage());
    this->setArmorDamageReduction(this->getInitArmorDamageReduction());
    this->setType(this->getInitType());
    cout(": Hi in Sub Class!");
}

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap::ClapTrap(name) {
    srand(static_cast<unsigned>(time(NULL)));
    this->setHitPoints(this->getInitHitPoints());
    this->setMaxHitPoints(this->getInitMaxHitPoints());
    this->setEnergyPoints(this->getInitEnergyPoints());
    this->setMaxEnergyPoints(this->getInitMaxEnergyPoints());
    this->setLevel(this->getInitLevel());
    this->setMeleeAttackDamage(this->getInitMeleeAttackDamage());
    this->setRangedAttackDamege(this->getInitRangedAttackDamage());
    this->setArmorDamageReduction(this->getInitArmorDamageReduction());
    this->setType("NI4N-TP");
    cout(": Hi in Sub Class!");
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) {
    *this = src;
}

NinjaTrap::~NinjaTrap(void) {
    cout(": goodbye in Sub Class!");
}

NinjaTrap&   NinjaTrap::operator = (NinjaTrap const& right) {
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

void    NinjaTrap::rangeAttack(std::string const& target) {
    std::string range = "Tonjutsu";

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

void    NinjaTrap::meleeAttack(std::string const& target) {
    std::string melee = "Kama";

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

void    NinjaTrap::ninjaShoebox(ClapTrap const& target) {
    cout() << "gave " << target.getName() << " a callot." << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const& target) {
    cout() << "gave " << target.getName() << " a cabbage." << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const& target) {
    cout() << "gave " << target.getName() << " a green pepper." << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap const& target) {
    cout() << "gave " << target.getName() << " a shuriken." << std::endl;
}

unsigned int    NinjaTrap::getInitHitPoints(void) const {
    return (this->ninja_init_hit_points_);
}

unsigned int    NinjaTrap::getInitMaxHitPoints(void) const {
    return (this->ninja_init_max_hit_points_);
}

unsigned int    NinjaTrap::getInitEnergyPoints(void) const {
    return (this->ninja_init_energy_points_);
}

unsigned int    NinjaTrap::getInitMaxEnergyPoints(void) const {
    return (this->ninja_init_max_energy_points_);
}

unsigned int    NinjaTrap::getInitLevel(void) const {
    return (this->ninja_init_level_);
}

std::string NinjaTrap::getInitName(void) const {
    return ("Ninja");
}

unsigned int    NinjaTrap::getInitMeleeAttackDamage(void) const {
    return (this->ninja_init_melee_attack_damage_);
}

unsigned int    NinjaTrap::getInitRangedAttackDamage(void) const {
    return (this->ninja_init_ranged_attack_damage_);
}

unsigned int    NinjaTrap::getInitArmorDamageReduction(void) const {
    return (this->ninja_init_armor_damage_reduction_);
}

std::string NinjaTrap::getInitType(void) const {
    return ("NI4N-TP");
}
