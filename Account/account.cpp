#include "account.h"
#include <iostream>
#include <string>
using namespace std;

void Account::deposits(float m)
{
    balance += m;
}

void Account::Initial(int ID, string Name, float balance)
{
    //如果形参与成员变量同名，用this来区分
    this->ID = ID;
    this->Name = Name;
    this->balance = balance;
}


int Account::withdraw(float m) {
    if(balance>m){
        balance -= m;
        return 1;
    }
    else
        return -1;
}

