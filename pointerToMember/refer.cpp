/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:04:18 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 18:27:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ptr23(int &ref) {
    ref += 10;
    cout << "ref: " << ref << endl;
}

void function123(int &ref) {
    ref += 10;
    cout << "ref: " << ref << endl;
    ptr23(ref);
}

int main() {
    int x = 5;
    
    function123(x);
}