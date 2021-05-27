/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:43:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 03:32:53 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_NINJATRAP_HPP_
#define EX03_NINJATRAP_HPP_

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   NinjaTrap : public ClapTrap {
 public:
    explicit NinjaTrap(std::string const& name);
    ~NinjaTrap(void);

    void    ninjaShoebox(ClapTrap const& target);
    void    ninjaShoebox(FragTrap const& target);
    void    ninjaShoebox(ScavTrap const& target);
    void    ninjaShoebox(NinjaTrap const& target);
};

#endif  // EX03_NINJATRAP_HPP_
