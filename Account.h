#include <iostream>
#include <string>

using namespace std;
class Account {
    public:
        double getBalances();
        double __getBalances() const { return balances; };
        void getAccountID();
        string __getAccountID() const { return accountID; };
        void actionDeposit(double amount);
        void actionWithdraw(double amount);
        void actionWriteTransaction(Account acc);
        Account getAccountProfile();

    private:
        double balances = 0.0;
        string accountID = "0000000000";
};
