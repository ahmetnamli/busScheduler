//
// Created by ahmet namli on 31.10.2019.
//

#include "busC.h"


busC::busC(string t, string f,string a, int c) {
    plate = a;
    capacity = c;
    to = t;
    from = f;
    addStop(from);
    addStop(to);
}
string busC::getTo() {
    return to;
}
string busC::getFrom() {
    return from;
}

string busC::getPlate() {
    return plate;
}
int busC::getCapacity() {
    return capacity;
}
void busC::addStop(string x) {
    if(busStop.size()>0) {
        if (busStop.at(busStop.size() - 1) == to) {
            busStop.at(busStop.size() - 1) = x;
            busStop.push_back(to);
        } else {
            busStop.push_back(to);
        }
    }else{
        busStop.push_back(x);
    }
}
void busC::addPas() {
    if(capacity>0)
        capacity--;

}




/*
 * busses
 * bus
 *
 *
 * bus
 * to from stops
 *
 *
 *
 * passenger
 * to from tc
 *
 *
 *
 *
 *
 * stop
 *
 *
 *
 *
 */