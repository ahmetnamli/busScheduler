//
// Created by ahmet namli on 31.10.2019.
//

#ifndef BUS_BUSSES_H
#define BUS_BUSSES_H
#include <iostream>
#include <vector>
#include "busC.h"
using namespace std;

class busses {
public:
    string name;
    vector<busC > bussesv;
    busses();
    void addBus(string, string,string, int);
    busC getBus(string);
    void listbus();
    void listBusPlate();
    void listBusCapacity();
    void listStops();
    void addSpecificStop(string,string);
    bool addPassenger(string, string);
    void buyTicket(string);
};


#endif //BUS_BUSSES_H
