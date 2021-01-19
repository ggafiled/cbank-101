#include <iostream>
#include <string>
#include "Account.h"
#include <regex>

using namespace std;

void Account::getAccountID(){
    cout << "Account ID : " << Account::__getAccountID();
}

double Account::getBalances(){
    return Account::__getBalances();
}
