////////////////////////////implementation file
#include "CBUS.h"

CBUS::CBUS()
{
    //constructor
}

CBUS::~CBUS()
{
    //destructor
}
//setter function definition
void CBUS::setNumberOfPassenger(int number){ //set number of passengers
    numberOfPassenger=number;
}
void CBUS::setNameOfDriver(string name){ //set name of driver
    nameOfDriver=name;
}
//getter function definition
int CBUS::getNumberOfPassenger(){return numberOfPassenger;} //return number of passengers
string CBUS::getNameOfDriver(){return nameOfDriver;} //return name of driver

//effective functions
void CBUS::setBusDetails(){//this function prompts the user to enter bus details taking setter from bus and vehicle
    int Number,Price;
    string Model, Type;
    int numberPass;
    string name;

    cout<<"Bus Number: ";
    cin>> Number;
    cout<<"\n";
    setCarNumber(Number);

    cout<< "Bus model: "<<endl;
    cin>>Model;
    cout<<"\n";
    setCarModel(Model);

    cout<<"Bus type: ";
    cin>>Type;
    cout<<"\n";
    setCarType(Type);

    cout<<"Enter bus price ";
    cin>>Price;
    cout<<"\n";
    setCarPrice(Price);


    cout<<"Number of passengers: ";
    cin>> numberPass;
    cout<<"\n";
    setNumberOfPassenger(numberPass);


    cout<<"Driver Name: ";
    cin>> name;
    cout<<"\n";
    setNameOfDriver(name);
}
void CBUS::getBusDetails(){//this function prints data
     cout<<"-----------Data you entered-----------"<<endl;
    cout<<"bus model: "<<getCarModel()<<endl;
    cout<<"bus Type: "<<getCarType()<<endl;
    cout <<"bus price: "<<getCarPrice()<<endl;
    cout<<"Number of passengers: "<<getNumberOfPassenger()<<endl;
    cout<<"Name of driver: "<<getNameOfDriver()<<endl;
}
