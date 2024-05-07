/////////////////////////////////implementation file//////////////////////////
#include "CCustomer.h"
#include<iostream>
using namespace std;

// constructor to Ensures all objects start in a consistent state.
CCustomer::CCustomer()
{
     //initialize all attributes to zero and NULL
    customerId = 0;
    customeName = "";
    customerEmail = "";
    emailPassword = "";
}
//setter functions definition
void CCustomer::setData(int id, string name, string email, string password)
{
    customerId = id;
    customeName = name;
    customerEmail = email;
    emailPassword = password;
}

void CCustomer::setCustomerId(int ID) { //set customer ID
    //insure that user has entered correct ID
    if (ID > 0) {
        customerId = ID;
    }
    else {
        cout << "Please Enter valid ID...." << endl;
        int _ID;
        cin >> _ID;
        setCustomerId(_ID);
    }
}
void CCustomer::setCustomerName(string name) {//set customer name
    customeName = name;
}
void CCustomer::setCustomerEmail(string email) {//set customer email
    customerEmail = email;
}
void CCustomer::setCustomerPassword(string password) { //set customer password
    emailPassword = password;
}


//getter functions
int CCustomer::getCustomerId() { return customerId; } //return id
string CCustomer::getCustomerName() { return customeName; }//return name
string CCustomer::getCustomerEmail() { return customerEmail; }//return email
string CCustomer::getPassword() { return emailPassword; } //return password

//object to access setter and getter functions


//effective functions
void CCustomer::addCustomerInfo() { //this function prompts the customer to enter his info


    int ID;
    string CName, CEmail, CPassword;


    cout << "ID: ";
    cin >> ID;
    setCustomerId(ID);


    cout << "Name: ";
    cin >> CName;
    setCustomerName(CName);


    cout << "Email: ";
    cin >> CEmail;
    setCustomerEmail(CEmail);


    cout << "Password: ";
    cin >> CPassword;
    setCustomerPassword(CPassword);

}
void CCustomer::getCustomerInfo() {//this function prints customer info
    cout << "----Customer details----" << endl;
    cout << "Name:   " << getCustomerName() << endl;
    cout << "ID:   " << getCustomerId() << endl;
    cout << "Email:   " << getCustomerEmail() << endl;
    cout << "Password:   " << getPassword() << endl;
}

CCustomer::~CCustomer()
{
    //dtor
}
