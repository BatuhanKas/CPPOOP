/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:23:44 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 14:59:18 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main() {
    Array mainArr(5);
    // Array secondArr(mainArr);

    // cout << "Capapacity: " << mainArr.getCapacity() << endl;
    // cout << "Size: " << mainArr.getSize() << endl << endl;

    // cout << "Capapacity: " << secondArr.getCapacity() << endl;
    // cout << "Size: " << secondArr.getSize() << endl << endl;

    mainArr.AddItem(1);
    mainArr.AddItem(2);
    mainArr.AddItem(3);
    // mainArr.AddItem(4);
    // mainArr.AddItem(5);

    // cout << "Capapacity: " << mainArr.getCapacity() << endl;
    // cout << "Size: " << mainArr.getSize() << endl << endl;

    // mainArr.AddItem(6);
    // mainArr.AddItem(7);

    cout << "Capapacity: " << mainArr.getCapacity() << endl;
    cout << "Size: " << mainArr.getSize() << endl << endl;

    // cout << "main arr:" << endl;
    // mainArr.printItems();

    Array thirdArr = mainArr;

    cout << "third arr:" << endl;
    thirdArr.printItems();
    thirdArr.AddItem(4);
    thirdArr.AddItem(5);
    cout << "added third arr:" << endl;
    thirdArr.printItems();
    cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    cout << "Size: " << thirdArr.getSize() << endl << endl;

    cout << "deleted third arr:" << endl;
    thirdArr.removeIndexItem(1);
    thirdArr.printItems();
    cout << "Capapacity: " << thirdArr.getCapacity() << endl;
    cout << "Size: " << thirdArr.getSize() << endl << endl;

    // mainArr.findElement(4, 0);
    // mainArr.findElement(0, 0);
}