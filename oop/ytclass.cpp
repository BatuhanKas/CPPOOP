/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ytclass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:49:57 by bkas              #+#    #+#             */
/*   Updated: 2024/05/09 16:47:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ytclass.hpp"

void YtClass::SetChannel(string name, string ownername) {
    this->Name = name;
    this->OwnerName = ownername;
    SubsCount = 0;
}

void YtClass::getInfo() {
    cout << "Name: " << Name << endl;
    cout << "Owner Name: " << OwnerName << endl;
    cout << "subc: " << SubsCount << endl;
    cout << "videos: " << endl;
    for (string videos : VideoTitles) {
        cout << videos << endl;
    }
    cout << endl;
}

YtClass::YtClass() {
    Name = "NULL";
    OwnerName = "NULL";
    this->SubsCount = 0;
}

YtClass::YtClass(string name, string ownername) {
    this->Name = name;
    OwnerName = ownername;
}