/////////////////////////////////////////////header file//////////////////////////////////////////////
#ifndef CVEHICLE_H
#define CVEHICLE_H

#include <vector>
#include <iostream>
using namespace std;

#include "CCustomer.h"



class CVehicle
{
    private:
    //attributes
    int carNumber;
    string carModel;
    string carType;
    float carPrice;
    bool rented;
    string returnTime;
    string rentledName;

    CCustomer Renter;
    public:
        CVehicle(); //constructor
        virtual ~CVehicle(); //destructor

    //setter functions prototypes
    void setCarNumber(int carNum); //set int car number
    void setCarModel(string model); // set car model in a char array
    void setCarType(string type); // set car type in a char array
    void setCarPrice(float price); // set char price in a char array
    void SetRented(bool rent); //set bool return statue(returned or not)
    void setReturnTime(string time);//set returned time in a char array
    void setRentledName(string rentername);  //set rentledname in a char array
    void setRenter(CCustomer renter);

    //getter functions prototype
    int getCarNumber(); //return car number
    string getCarModel(); //return car model
    string getCarType(); //return car type
    float getCarPrice(); //return car price
    bool getRentedStatue(); //return rented statue
    string  getReturnTime(); //return return time
    string getrentledName(); //return renter name
    CCustomer getRenter();


    //effective functions
    void AddCarDetails();
    void getCarsInfo();
    void rentCar(vector<CVehicle> listOfVehicls);
    void InfoOfRentedCar();//info if renter







    protected:


};

#endif // CVEHICLE_H
