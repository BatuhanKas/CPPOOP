/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matris.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:54:39 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 13:08:58 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int matris[4][4];

    size_t i = 0;
    size_t j = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << i << ". satirin " << j << ". sutununun degerini giriniz."
                 << endl;
            cin >> matris[i][j];
        }
    }

    cout << "Degerleriniz" << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << setw(2) << matris[i][j];
        }
        cout << endl;
    }
}