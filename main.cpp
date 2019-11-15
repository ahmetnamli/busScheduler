#include <iostream>

#include "busses.h"
using namespace std;


int main() {
    int input = 9;
    string x;
    string t;
    string f;
    busses b;
    while(input != 0) {
        //menu
        cout <<"1-) Add bus"<<endl<<"2-) List buses"<<endl<<"3-) Show stops of bus"<<endl<<"4-) Add stop to specific bus"<< endl<<"5-) Buy ticket"<< endl<<"Enter: ";
        cin >> input;
        if (input == 1) {
            cout<<"Enter plate number"<<endl;
            cin>>x;
            cout<<"Enter capacity"<<endl;
            cin>>input;
            cout<<"Enter from"<<endl;
            cin>>f;
            cout<<"Enter to"<<endl;
            cin>>t;
            b.addBus(t,f,x,input);

        } else if (input == 2) {
            b.listbus();

        } else if (input == 3) {
            b.listStops();

        }else if (input == 4) {
            cout<<"Enter plate"<<endl;
            cin>>x;
            cout<<"Enter stop"<<endl;
            cin>>t;
            b.addSpecificStop(x,t);
        } else if(input == 5){
            cout<<"From"<<endl;
            cin>>x;
            cout<<"To"<<endl;
            cin>>t;
            b.addPassenger(x,t);
            cout<< "Which one?"<<endl;
            cin>>f;
            b.buyTicket(f);
        }

    }

    /*
    for(int i = 1 ; i < 11 ; i++){
        b.addBus("x", i);
    }
    b.listBusCapacity();
    b.getBus("x").addPas(234);
    b.listBusCapacity(); */
    return 0;
}