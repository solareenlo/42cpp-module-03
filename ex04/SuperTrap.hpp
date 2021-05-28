/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 04:17:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/28 18:53:52 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX04_SUPERTRAP_HPP_
#define EX04_SUPERTRAP_HPP_

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class   SuperTrap : public FragTrap, public NinjaTrap {
 public:
    SuperTrap(void);
    explicit SuperTrap(std::string const& name);
    SuperTrap(SuperTrap const& src);
    ~SuperTrap(void);

    SuperTrap&  operator = (SuperTrap const& right);

    void        rangeAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
};

#endif  // EX04_SUPERTRAP_HPP_
