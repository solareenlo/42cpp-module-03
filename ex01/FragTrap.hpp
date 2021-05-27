/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 04:47:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/27 16:53:01 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_FRAGTRAP_HPP_
#define EX01_FRAGTRAP_HPP_

#include <iostream>
#include <string>

class   FragTrap {
 public:
    explicit FragTrap(std::string const& name);
    ~FragTrap(void);

    void            rangeAttack(std::string const& target);
    void            meleeAttack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            vaulthunter_dot_exe(std::string const& target);

 private:
    unsigned int    hit_points_;
    unsigned int    max_hit_points_;
    unsigned int    energy_points_;
    unsigned int    max_energy_points_;
    unsigned int    level_;
    std::string     name_;
    unsigned int    melee_attack_damage_;
    unsigned int    ranged_attack_damege_;
    unsigned int    armor_damage_reduction_;
    std::ostream&   cout(void);
    std::ostream&   cout(std::string const& str);
};

#endif  // EX01_FRAGTRAP_HPP_
