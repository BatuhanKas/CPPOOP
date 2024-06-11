/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   friend.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:19:47 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 12:17:17 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Triangle {
    // Eskenar ucgen oldugunu farzet.
   private:
    float length, circumference, area;

   public:
    void setLen(float len);
    float getLen();
    void calculate();

    // Friend Fonksiyon tanimi;
    // friend void display(Triangle t);

    // Friend Class tanimi;
    friend class Friend;
};

// Normal bir fonksiyon tanimladim.
// void display(Triangle t);

class Friend {
   public:
    void display(Triangle t1);
};