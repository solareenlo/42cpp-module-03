/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 17:57:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    ClapTrap    clap("Clap");
    FragTrap    frag("Frag");
    ScavTrap    scav("Scav");
    NinjaTrap   ninja1("Ninja1");
    NinjaTrap   ninja2("Ninja2");

    std::cout << std::endl;
    ninja1.ninjaShoebox(clap);
    ninja1.ninjaShoebox(frag);
    ninja1.ninjaShoebox(scav);
    ninja1.ninjaShoebox(ninja1);
    std::cout << std::endl;

    ninja2.takeDamage(100);
    std::cout << std::endl;

    std::cout << ninja1.getHitPoints() << std::endl;
    ninja1 = ninja2;
    std::cout << ninja1.getHitPoints() << std::endl;
    std::cout << std::endl;

    return (0);
}
