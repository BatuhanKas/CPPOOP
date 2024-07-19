/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:49 by bkas              #+#    #+#             */
/*   Updated: 2024/07/19 14:18:41 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void checknum(int num) throw(runtime_error, logic_error) {
    if (num < 0) {
        throw runtime_error("num can't be lower than zero");
    } else if (num == 0) {
        throw logic_error("num can't be zero");
    } else {
        cout << "num:" << num << endl;
    }
}

int main() {
    try {
        // checknum(31);
        checknum(0);
        // checknum(-1);
    } catch (const runtime_error &e) {
        cerr << "runtime err: " << e.what() << endl;
        return 0;
    } catch (const logic_error &e) {
        cerr << "logic err: " << e.what() << endl;
        return 0;
    } catch (...) {
        cerr << "unknown err:" << endl;
    }

    cout << "Everything's fine." << endl;
}