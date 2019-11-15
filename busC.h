//
// Created by ahmet namli on 31.10.2019.
//

#ifndef BUS_BUSC_H
#define BUS_BUSC_H

#include <iostream>
#include <vector>

using namespace std;
class busC {
public:
    string plate;
    vector<string> busStop;
    int capacity;
    string to;
    string from;
    string getTo();
    string getFrom();
    busC(string,string,string, int);
    string getPlate();
    int getCapacity();
    void addStop(string);
    void addPas();
    string getStop();
    void addSpec();

};


#endif //BUS_BUSC_H
