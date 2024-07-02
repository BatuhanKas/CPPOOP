/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:32:46 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 15:46:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main() {
    string msg = "batuhan kas";

    // cout << msg.append(" kas") << endl;
    // kisaca cout << msg + " kas" << endl; yapmamizi sagliyor.

    // int index = msg.find("kas");
    // cout << index << endl;
    // kas kelimesini buldugu indexi donduruyor.

    cout << msg.insert(2, "AAAA");
}