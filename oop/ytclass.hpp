/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ytclass.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:50:37 by bkas              #+#    #+#             */
/*   Updated: 2024/05/09 16:44:03 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YTCLASS_HPP
#define YTCLASS_HPP

#include <iostream>
#include <list>

using namespace std;

class YtClass {
   public:
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> VideoTitles;

    void SetChannel(string name, string ownername);
    void getInfo();
    YtClass();
    YtClass(string name, string ownername);
};

class CookingCh : public YtClass {
   public:
    CookingCh(string name, string surname)
        : YtClass(name, surname) {}
    CookingCh() : YtClass() {}
};

#endif