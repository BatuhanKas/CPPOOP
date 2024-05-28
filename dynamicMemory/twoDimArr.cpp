/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoDimArr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 22:32:01 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 11:36:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.hpp"

int main() {
    Example **arr1;

    arr1 = new Example *[5];

    for (int i = 0; i < 5; i++) {
        arr1[i] = new Example[5];
        for (int j = 0; j < 5; j++) {
            arr1[i][j].x = i;
            arr1[i][j].y = j;
            arr1[i][j].display();
        }
        delete[] arr1[i];
    }
    delete[] arr1;

    /**
     * @brief im gonna try something
     *
    for (size_t i = 0; i < 5; i++) {
        delete[] arr1[i];
    }
    delete[] arr1;
     */
}