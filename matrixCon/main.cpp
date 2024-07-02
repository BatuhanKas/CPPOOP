/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:33:24 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 13:16:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"

int main() {
    int row = 5;
    int col = 5;
    Matrix m1(row, col);
    // m1.setVal(5, 1, 5);
    // m1.display();
    // for (int i = 1; i <= row; i++) {
    //     for (int j = 1; j <= col; j++) {
    //         m1.setVal(i, j, i * j);
    //     }
    // }
    Matrix m2;
    m2.randomSet();
    m2.display();

    Matrix m3;
    m3.randomSet();
    m3.display();
    // m1.display();

    Matrix m4 = m2.addMatrix(m3);
    m4.display();
    // m1.identityMatrixSet();
    // m1.display();
    // Matrix m2;
    // m2.display();
}