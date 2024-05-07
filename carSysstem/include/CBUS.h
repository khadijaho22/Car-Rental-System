//////////////////////////////////header file//////////////////////////
#ifndef CBUS_H
#define CBUS_H

#include <CVehicle.h>
#include<string>


class CBUS : public CVehicle //Inherited from CVehicle class
{
     private:
         //attributes
         int numberOfPassenger;
         string nameOfDriver;
    public:
        CBUS(); //constructor
        virtual ~CBUS(); //destructor

        //setter functions prototypes
        void setNumberOfPassenger(int number);//set number of passengers
        void setNameOfDriver(string name); //set name of driver

        //getter functions prototypes
        int getNumberOfPassenger(); //return number of passenger
        string getNameOfDriver(); //return name of driver

        //effective functions prototypes
        void setBusDetails();
        void getBusDetails();

    protected:


};

#endif // CBUS_H
