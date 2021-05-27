/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:06:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 03:50:12 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    ClapTrap    clapTrap("Clap");
    FragTrap    fragTrap("Frag");
    ScavTrap    scavTrap("Scav");
    NinjaTrap   ninjaTrap("Ninja");

    srand(static_cast<unsigned>(time(NULL)));
    ninjaTrap.ninjaShoebox(clapTrap);
    ninjaTrap.ninjaShoebox(fragTrap);
    ninjaTrap.ninjaShoebox(scavTrap);
    ninjaTrap.ninjaShoebox(ninjaTrap);
    return (0);
}
