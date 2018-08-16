#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int ID;
    string Name;
    float balance;      //balance--余额
public:
    //构造函数和折够函数
    Account();
    Account(int ID, string Name, float balance);
    Account(Account &other);


    //声明成员函数，类外定义
    void deposits(float m);
    void Initial(int ID, string Name, float balance);
    int withdraw(float);


    //类中定义的函数默认为内联函数
    int getID() {
        return ID;
    }

    void setID(int ID) {
        this->ID = ID;
    }

    float getBalance();
    void setBalance();
    string getName();
    void setName();
    void showMe() {
        cout << Name << endl;
    }

};

#endif // ACCOUNT_H
