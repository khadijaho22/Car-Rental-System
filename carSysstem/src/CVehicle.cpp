///////////////////////////implementations file ///////////////////////
#include "CVehicle.h"
#include<iostream>
#include <vector>
using namespace std;
// constructor to Ensures all objects start in a consistent state.
CVehicle::CVehicle()
{
    //initialize all attributes to zero and NULL
    carNumber = 0;
    carModel="";
    carType="";
    carPrice=0.0;
    rented= false;
    returnTime="";
    rentledName="";
}

CVehicle::~CVehicle()
{
    //dtor
}
//setter functions definitions

 void CVehicle::setCarNumber(int carNum){//set car number

            carNumber=carNum;
 }

 void CVehicle::setCarModel(string model){//set car model
     carModel=model;

     }

 void CVehicle::setCarType(string type) {//set car type
     carType=type;
     }
 void CVehicle::setCarPrice(float price){//set car price

     carPrice=price;}

 void CVehicle::SetRented(bool rent) //set rented statue
 {
     rented = rent;
 }
 void CVehicle::setReturnTime(string time)//set return time
 {
     returnTime = time;

 }
 void CVehicle::setRentledName(string rentername){// set renter name
     rentledName = rentername;

 }

 void CVehicle::setRenter(CCustomer renter) //set renter
 {
     Renter = renter;
 }




 //getter functions definitions


 int CVehicle::getCarNumber(){return carNumber;} // return car number

string CVehicle::getCarModel(){return carModel;} //return car model

string CVehicle::getCarType(){return carType;} //return car type

float CVehicle::getCarPrice(){return carPrice;}  //return car price

bool CVehicle::getRentedStatue() //return rent statue
{
    return rented;
}

string CVehicle::getReturnTime() //return return time
{
    return returnTime;
}

string CVehicle::getrentledName(){return rentledName;} //return renter name

CCustomer CVehicle::getRenter()
{
    return CCustomer();
}




//effective function
void CVehicle::AddCarDetails(){//this function prompts user to enter car details
    int Number,Price;
    string Model, Type;

    cout<<"Car Number: ";
    cin>> Number;
    setCarNumber(Number);

    cout<< "Car model: "<<endl;
    cin>>Model;
    setCarModel(Model);

    cout<<"Car type: ";
    cin>>Type;
    setCarType(Type);

    cout<<"Enter car price ";
    cin>>Price;
    setCarPrice(Price);

}
void CVehicle::getCarsInfo(){ //this function prints data


   // cout <<"Renter name: "<<getrentledName()<<endl;
    cout<<"car model: "<<getCarModel()<<endl;
    cout<<"car Type: "<<getCarType()<<endl;
    cout <<"car price: "<<getCarPrice()<<endl;
    //cout<<"Return time: "<<getReturnTime()<<endl;
    cout<<"\t\t\t";
    cout<<"\n";

}

void CVehicle::rentCar(vector<CVehicle> listOfVehicls)
{

}
void CVehicle::InfoOfRentedCar(){ //this function prints data of renter
    cout<<"------information of your car------"<<endl;
    cout <<"Renter name: "<<getrentledName()<<endl;
    cout<<"car model: "<<getCarModel()<<endl;
    cout<<"car Type: "<<getCarType()<<endl;
    cout <<"car price: "<<getCarPrice()<<endl;
    cout<<"Return time: "<<getReturnTime()<<endl;
    cout<<"-------------------------------Thank you for choosing us------------------------------- "<<endl;

}
