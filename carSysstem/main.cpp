//////////////////////////////////client code////////////////////////
///include all classes
#include"CCustomer.h"
#include"CVehicle.h"
#include"CBUS.h"
#include <iostream>
#include <vector>



bool Login(); //function prototype
void RentCar(vector<CVehicle> listOfVehicls, CCustomer renter); //function prototype

//vector ..
vector<CVehicle> Vehicles;
vector<CCustomer> Customers;
vector<CBUS> bus;
CCustomer currentUser;//object


using namespace std;

int main()
{
    //creating welcome title
    cout << "\t\t\t\t\tWelcome to out Rental System" << endl;
    cout << "\n\n\n";

    //taking number of cars available
    cout <<"Enter the number of cars: ";
    int numberOfCars;
    cin >> numberOfCars;
    cout<<"\n";

    //getting the details of the cars
    for(int i = 0 ; i<numberOfCars;i++)
    {
        // refreshing data every iteration
        cout<<"details car number "<<(i+1)<<endl;
        CVehicle tempVehicle; //temporary object
        tempVehicle.AddCarDetails(); //take car details
        Vehicles.push_back(tempVehicle);

    }

    cout<<"\n";
    //printing car details
    cout<<"-------All CAR DETAILS---------"<<endl;
    for (auto it = begin(Vehicles); it != end(Vehicles); ++it) {
        it->getCarsInfo(); //print data
    }

    //getting number of buses
    cout << "Please enter the number of buses: ";
    int numberOfBuses;
    cin >> numberOfBuses;

    //getting details of the buses
    for(int i = 0 ; i<numberOfBuses;i++)
    {
        cout<<"enter the bus details number :"<<(i+1)<<endl;
        CBUS tempBus; //temp object from class
        tempBus.setBusDetails(); //taking data
        bus.push_back(tempBus);

    }
    //printing bus data
    for (auto it = begin(bus); it != end(bus); ++it) {
        it->getBusDetails(); //print data
    }
    cout<<"-------------------------------------------------------"<<endl;

    //getting number of customer that are on system
    cout << "Please enter the number of customers: ";
    int numberOfcustomers;
    cin >> numberOfcustomers;

    //getting the details of the customers
    for (int i = 0; i < numberOfcustomers; i++)
    {
        cout<<"the details of customer number: "<<(i+1)<<endl;
        CCustomer tempCustomer; //temp object from class
        tempCustomer.addCustomerInfo(); // taking data
        Customers.push_back(tempCustomer);
        cout<<"\n";
    }
    for (auto it = begin(Customers); it != end(Customers); ++it) {
        it->getCustomerInfo();
    }
    cout<<"\t\t---------------------------------------\t\t";
    cout<<"\n";
    cout<<"You can now login.."<<endl;
    cout<<"\n";

    bool Logedin = false; //check login statue
    int numberOfFails = 0; //check number of fails
    for (int i = 0; i < 3; i++)
    {
        if (Logedin) //function call
        {
            break;//if user logedin break
        }
        if (Login()) //function call
        {
            cout << "You have Logedin..." << endl;
            Logedin = true;
        }
        else
        {
            //if user did not enter correct name or password
            cout << "Username or Password is incorrect!!!" << endl;
            numberOfFails++;
            if (numberOfFails > 2) //terminate after 3 times of failure
            {
                return 0;//terminate the project
            }
        }
    }
    RentCar(Vehicles,currentUser); //function call


    return 0;
}


//this function check user information to login and rent car
bool Login()//function definition
{
    //entering name and password for user
    string UserName, Password;
    cout << "Please enter Username: ";
    cin >> UserName;
    cout << "Please enter Password: ";
    cin >> Password;
    //checking if he entered data already on system or not
    for (auto it = begin(Customers); it != end(Customers); ++it)
    {
        if (UserName == it->getCustomerName() && Password == it->getPassword())
        {
            int id = it->getCustomerId();
            string name = it->getCustomerName();
            string password = it->getPassword();
            string email = it->getCustomerEmail();
            currentUser.setData(id, name, email, password);

            return true; //loged in successfully
        }
    }
    return false; //did not enter correct username or password
}


//this function prints all cars and make user choose one to rent it
void RentCar(vector<CVehicle> listOfVehicls,CCustomer renter) //function definition
{
    /// to rent a car
    /* we need price - we need duration -- we need customer */
    cout<<"--------------------------------------------------------"<<endl;
    cout << "\t\t\tAvailable cars\t\t\t" << endl;
    int counter = 0;
    //printing all car data in friendly way

    for (auto it = begin(listOfVehicls); it != end(listOfVehicls); ++it)
    {
        cout << counter + 1 << "- ";
        it->getCarsInfo();
        counter++;
    }
    cout<<"--------------------------------------------------------"<<endl;

    //choose car
    cout << "Please enter the number of the car you want to rent" << endl;
    int carNumber=1;
    cin >> carNumber;
    if(carNumber>listOfVehicls.size())
    {
        cout<<"you picked a wrong number"<<endl; //if he entered wrong number
    }
    else //if he entered correct number
    {

        listOfVehicls.at(carNumber-1).SetRented(true); //set rented to true

        //enter return time
        cout<<"please enter return time: "<<endl;
        string RTime;
        cin>>RTime;



        listOfVehicls.at(carNumber-1).setReturnTime(RTime);
        cout << "\t\tCar rented.\t\t"<<endl;

        listOfVehicls.at(carNumber-1).setRenter(renter); //set renter to be added on car
        listOfVehicls.at(carNumber-1).setRentledName(currentUser.getCustomerName());
        listOfVehicls.at(carNumber-1).getrentledName();
        listOfVehicls.at(carNumber-1).InfoOfRentedCar(); //printing info of his car

    }




}




