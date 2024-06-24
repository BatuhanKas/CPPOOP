/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:27:50 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 11:18:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCESS_HPP
#define ACCESS_HPP

#include <iostream>
using namespace std;

class base {
   protected:
    int x;

   public:
    void setx(int _x) { x = _x; };
    int getx() { return x; };
};

class derived : public base {
   public:
    void display() { cout << "xval: " << getx() << endl; }
};

#endif