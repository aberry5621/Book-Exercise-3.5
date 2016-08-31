//
//  main.cpp
//  Book Exercise 3.5
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Find future dates
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    cout << "Find Future Dates \n";
    // D
    int today_input = 0;
    int elapsed_day_input = 0;
    int calc_day = 0;
    
    // I
    cout << "Enter today's day: ";
    cin >> today_input;
    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsed_day_input;
    
    // P
    calc_day = (today_input + elapsed_day_input) % 7;
    
    // O
    cout << "Today is ";
    if (today_input == 0) {
        cout << "Sunday";
    } else if (today_input == 1) {
        cout << "Monday";
    } else if (today_input == 2) {
        cout << "Tuesday";
    } else if (today_input == 3) {
        cout << "Wednesday";
    } else if (today_input == 4) {
        cout << "Thursday";
    } else if (today_input == 5) {
        cout << "Friday";
    } else if (today_input == 6) {
        cout << "Saturday";
    } else {
        cout << "No day, oops!" << endl;
    }
    
    cout << " and the future day is ";
    
    if (calc_day == 0) {
        cout << "Sunday" << endl;
    } else if (calc_day == 1) {
        cout << "Monday" << endl;
    } else if (calc_day == 2) {
        cout << "Tuesday" << endl;
    } else if (calc_day == 3) {
        cout << "Wednesday" << endl;
    } else if (calc_day == 4) {
        cout << "Thursday" << endl;
    } else if (calc_day == 5) {
        cout << "Friday" << endl;
    } else if (calc_day == 6) {
        cout << "Saturday" << endl;
    } else {
        cout << "No day, oops!" << endl;
    }
    
    return 0;
}
