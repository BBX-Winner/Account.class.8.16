#include <QCoreApplication>
#include "account.h"
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Account myAccount;
    myAccount.deposits(200.0);
    myAccount.ID = 00001;

    return a.exec();
}

bool transfer(Account &A, Account &B,float m) {
    if(A.withdraw(m)==1){
        B.deposits(m);
        return true;
    }
    else
        return false;
}
