/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:59:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/10 15:52:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ytclass.hpp"

int main() {
    YtClass yt1;
    CookingCh yt2("ahmet", "mehmet");
    CookingCh yt3;

    yt1.SetChannel("Batuhan", "sadf");
    yt1.VideoTitles.push_back("ali");
    yt1.VideoTitles.push_back("veli");
    yt1.getInfo();

    // yt2.SetChannel("ali", "veli");
    yt2.getInfo();
    yt3.getInfo();
    cout << "the num is: " << yt3.getNumber() << endl << endl;

    CookingCh yc("mutfak", "robotu");
    yc.publishVideo("yumurta");
    yc.publishVideo("menenb");
    yc.subscribe();
    yc.getInfo();
}