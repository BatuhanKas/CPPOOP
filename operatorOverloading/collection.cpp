/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:28:56 by bkas              #+#    #+#             */
/*   Updated: 2024/06/08 17:35:39 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operatorOverloading.hpp"

// Listeye surekli olarak kisi ekleme
void Collection::operator+=(Person &p) { persons.push_back(p); };

void Collection::operator-=(Person &p) { persons.remove(p); }

ostream &operator<<(ostream &o, Collection &c) {
    /**
     * @brief for aciklama:
     *
     Bu, range-based for loop (aralık tabanlı for döngüsü) olarak bilinir.
     C++11 ile birlikte gelen bir dil özelliğidir. c.persons: Collection
     sınıfının persons adında bir üyesidir ve Person nesnelerinden oluşan bir
     kapsayıcıdır (örneğin std::vector<Person>). Person printperson: c.persons
     kapsayıcısındaki her bir Person nesnesi sırasıyla printperson adlı geçici
     değişkene kopyalanır.
     *
     */
    for (Person printperson : c.persons) {
        o << printperson << endl;
    }
    return o;
}

// void Collection::print() {
//     for (list<Person>::iterator it = persons.begin(); it != persons.end();
//          it++) {
//         cout << *it << endl;
//     }
// };