/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dmemory.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:50:32 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 11:54:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DMEMORY_H
#define DMEMORY_H

#include <iostream>
using namespace std;

class Example {
   public:
    int x, y;
    Example(int mx = 0, int my = 0);
    ~Example() { cout << "Dest Worked" << endl; };
    void display() { cout << "x val: " << x << " Y val: " << y << endl; };
    Example addSum(Example &oth);
};

#endif