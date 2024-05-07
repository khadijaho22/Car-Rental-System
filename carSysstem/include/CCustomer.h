////////////////////////////////////header function////////////////////////
#ifndef CCUSTOMER_H
#define CCUSTOMER_H
#include <iostream>
using namespace std;



class CCustomer
{
    private:
    //attributes
    int customerId;
    string customeName;
    string customerEmail;
    string emailPassword;
    public:
        CCustomer();//constructor
        virtual ~CCustomer(); //destructor

    //setter functions prototypes
    void setData(int id, string name, string email, string password);
    void setCustomerId(int ID); //set customer id
    void setCustomerName(string name); //set customer name
    void setCustomerEmail(string email); //set customer email
    void setCustomerPassword(string password); //set customer password

    //getter function prototypes
    int getCustomerId(); //return Id
    string getCustomerName(); //return name
    string getCustomerEmail(); //return email
    string getPassword(); //return password

    //effective functions prototypes
    void addCustomerInfo();  //get info from user
    void getCustomerInfo(); //print info on screen

    protected:


};

#endif // CCUSTOMER_H
