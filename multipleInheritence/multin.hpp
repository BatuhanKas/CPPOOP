/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multin.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:31:57 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 12:10:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MULTIN_HPP
#define MULTIN_HPP

#include <iostream>
using namespace std;

class AClass {
   public:
    int a;
    AClass();
    ~AClass();
};

class BClass {
   public:
    int b;
    BClass();
    ~BClass();
};

/**
 * @brief Class Coklu Miras alma
 *
 * her ikisinide ayri ayri protected miras aldigim icin
 * sadece Class icerisinde ve miras alan class'larda kullanabilirim.
};
*/

class CClass : protected AClass, protected BClass {
   public:
    CClass();
    ~CClass();
};

#endif