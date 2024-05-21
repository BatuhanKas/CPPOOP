/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:33:24 by bkas              #+#    #+#             */
/*   Updated: 2024/05/21 14:54:18 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"

int main() {
    int row = 5;
    int col = 6;
    Matrix m1(row, col);
    // m1.setVal(5, 1, 5);
    // m1.display();
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            m1.setVal(i, j, i * j);
        }
    }
    m1.display();

    // Matrix m2;
    // m2.display();
}