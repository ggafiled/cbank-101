#include <iostream>
#include "Account.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int _input = -1;

void displayMenu()
{
	printf("+++++++++++++++++++++++++++++++++++++\n");
	printf("+           CBANK  COMPANY          +\n");
	printf("+++++++++++++++++++++++++++++++++++++\n");
	printf("+   	0. Add account              +\n");
	printf("+   	1. Disable account          +\n");
	printf("+   	2. Enable account           +\n");
	printf("+   	3. List all account         +\n");
	printf("+   	4. Deposit                  +\n");
	printf("+   	5. Withdraw                 +\n");
	printf("+   	6. Transfer                 +\n");
	printf("+   	7. Check balance            +\n");
	printf("+   	9. Exit                     +\n");
	printf("+++++++++++++++++++++++++++++++++++++\n");
}

int getInput()
{
	char tmp[101];
	printf("Waitting command : ");
	scanf("%s", &tmp);
	string a = tmp;
	_input = stoi(a);
	return _input;
}

bool checkAuth()
{
	char tmp[10], tmp1[10];
	system("cls");
	printf("##################### IDENTITY VERIFICATION #####################\n");
	printf("Enter your Account ID : ");
	scanf("%s", &tmp);
	string id = tmp;
	string pwd;
	for (int i = 3; i >= 0; i--)
	{
		printf("__*Enter your Password : ");
		scanf("%s", &tmp1);
		pwd = tmp1;
		if (pwd == "12345")
		{
			return true;
		}else{
			return false;
		}
	}
}

void addAccount()
{
	printf("*addAccount\n");
};

void disableAccount()
{
	printf("*disableAccount\n");
};

void enableAccount()
{
	printf("*enableAccount\n");
};

void listAccount()
{
	printf("*listAccount\n");
};

void actionDeposit()
{
	if (checkAuth())
	{
		printf("##################### DEPOSIT #####################\n");
		printf("########## WELCOME : NATTAPOL KROBKLANG ###########\n");
		getch();
	}
};

void actionWithdraw()
{
	printf("*actionWithdraw\n");
};

void actionTransfer()
{
	printf("*actionTransfer\n");
};

void actionCheckBalance()
{
	printf("*actionCheckBalance\n");
};

void switchMenu()
{
	switch (_input)
	{
	case 0:
		addAccount();
		break;
	case 1:
		disableAccount();
		break;
	case 2:
		enableAccount();
		break;
	case 3:
		listAccount();
		break;
	case 4:
		actionDeposit();
		break;
	case 5:
		actionWithdraw();
		break;
	case 6:
		actionTransfer();
		break;
	case 7:
		actionCheckBalance();
		break;
	default:
		system("cls");
		displayMenu();
		getInput();
	}
}

int main(int argc, char **argv)
{
	do
	{
		try
		{
			if (_input < 0 || _input > 9)
			{
				system("cls");
				displayMenu();
				getInput();
				switchMenu();
			}
			else
			{
				displayMenu();
				getInput();
				switchMenu();
			}
		}
		catch (...)
		{
			system("cls");
			displayMenu();
			getInput();
			switchMenu();
		}

	} while (_input != 9);
	return 0;
}
