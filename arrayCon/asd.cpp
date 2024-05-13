/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:39:52 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 12:28:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ft_func(char *&data) {
    data = new char[5];
    char x = 97;

    for (int i = 0; i < 8; i++) {
        data[i] = x;
        x++;
    }

    for (int i = 0; i < 8; i++) {
        cout << data[i] << endl;
    }

    delete[] data;
}

int main() {
    char *data;
    ft_func(data);
}