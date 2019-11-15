//
// Created by ahmet namli on 31.10.2019.
//

#include "busses.h"

void busses::addBus(string t, string f,string p, int i) {
    busC bus(t,f,p,i);
    bussesv.push_back(bus);

}
busC busses::getBus(string plate) {
    for(int i = 0; i < bussesv.size();i++){
        if(bussesv.at(i).getPlate()== plate){
            return bussesv.at(i);
        }
    }
}
busses::busses() {
}
void busses::listBusPlate(){
    for(int i = 0; i < bussesv.size();i++){
        cout<<bussesv.at(i).getPlate()<<endl;
    }
}
void busses::listBusCapacity() {
    for(int i = 0; i < bussesv.size();i++){
        cout<<bussesv.at(i).getCapacity()<<endl;
    }
}

void busses::listbus() {
    cout<<"PLATE \t"<<"CAPACITY"<<endl;
    for(int i = 0; i< bussesv.size(); i++){
        cout<< bussesv.at(i).getPlate()<< " \t";
        cout<< bussesv.at(i).getCapacity()<<endl;
    }
}
void busses::listStops() {
    for(int i = 0; i< bussesv.size(); i++){
        cout<< bussesv.at(i).getPlate()<< " ";
        cout<< bussesv.at(i).getCapacity()<<endl;
        for(int j = 0 ; j < bussesv.at(i).busStop.size();j++){
            cout<< bussesv.at(i).busStop.at(j)<< endl;
        }
    }
}

void busses::addSpecificStop(string x, string y) {
    for(int i = 0; i< bussesv.size(); i++){
        if(bussesv.at(i).getPlate()==x){
            bussesv.at(i).addStop(y);
        }
    }
}

bool busses::addPassenger(string f, string t) {
    for(int i = 0; i< bussesv.size(); i++){

        for(int j = 0 ; j < bussesv.at(i).busStop.size();j++){
            for(int k = j ; k < bussesv.at(i).busStop.size();k++) {
                if(bussesv.at(i).busStop.at(j) == f && bussesv.at(i).busStop.at(k)== t) {
                    cout << bussesv.at(i).getPlate() << " ";
                    cout << bussesv.at(i).getCapacity() << endl;
                }
            }
        }
    }

}

void busses::buyTicket(string f) {
    for(int i = 0; i< bussesv.size(); i++){
        if(bussesv.at(i).getPlate()==f){
            if(bussesv.at(i).getCapacity()>0) {
                bussesv.at(i).addPas();
            }else{
                cout<<"Selected bus is full"<<endl;
            }
        }
    }


}