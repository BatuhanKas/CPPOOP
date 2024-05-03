/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:20:07 by bkas              #+#    #+#             */
/*   Updated: 2024/05/03 11:50:54 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

void degistir(int &ref) {
    ref = 33;
}

int main() {
    int a = 10;

    a--;

    cout << "old : "<< a << endl;
    degistir(a);
    cout << "new : "<< a << endl;
    
}
