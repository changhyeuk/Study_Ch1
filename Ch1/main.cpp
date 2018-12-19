//
//  main.cpp
//  Ch1
//
//  Created by ChangKimMac on 12/16/18.
//  Copyright © 2018 ChangKim. All rights reserved.
//

#include <iostream>

using namespace std;

// Only Delare Namespace

namespace BankAcc {
    void Manu(void);
    void OpenACC(void);
    void DepositACC(void);
    void WidthdrawACC(void);
    void TotalInfoACC(void);
    void ExitProgramACC(void);
}

// Main Program
const int Name_LEN = 20;
int MN; // Manu Number

typedef struct {
    int accID;
    int balance;
    char cusName[Name_LEN];
} Account;

Account accArry[100];
int accNum = 0;

int main(void)
{
    while ( MN != 5)
    {
        BankAcc::Manu();
        
        if (MN == 1)
        {
            BankAcc::OpenACC();
        }
        else if (MN == 2)
        {
            BankAcc::DepositACC();
        }
        else if (MN == 3)
        {
            BankAcc::WidthdrawACC();
        }
        else if (MN == 4)
        {
            BankAcc::TotalInfoACC();
        }
        else
        {
            cout<<" You Choose Wrong Number "<<endl;
        }
    }
    
     cout<<" Exit Program "<<endl;
    
    return 0;
}

// Name Space Function
void BankAcc::Manu(void) {
    int SelN;
    cout<<" ====== Manu ====== "<<endl;
    cout<<" 1. Open Account "<<endl;
    cout<<" 2. Deposit "<<endl;
    cout<<" 3. Widraw "<<endl;
    cout<<" 4. Info "<<endl;
    cout<<" 5. Exit "<<endl;
    cout<<" =================== "<<endl;
    cout<<" Select : ";
    cin>>SelN;
    ::MN = SelN;
}

void BankAcc::OpenACC(void) {
    int id;
    char name[Name_LEN];
    int balance;
    
    cout<<" ---------------------------- "<<endl;
    cout<<" You choose Open Bank Account "<<endl;
    cout<<" ---------------------------- "<<endl;
    cout<<" Please Put Account Number :";
    cin>>id;
    cout<<" Plase Put Your Name :";
    cin>>name;
    cout<<" Plase Put Your Deposit : ";
    cin>>balance;
    
    accArry[accNum].accID=id;
    //accArry[accNum].cusName=name;
    strcpy(accArry[accNum].cusName,name); // String Copy
    accArry[accNum].balance=balance;
    accNum++;
}

void BankAcc::DepositACC(void) {
    int id;
    int Dep;
    cout<<" ---------------------------- "<<endl;
    cout<<" You choose Deposit "<<endl;
    cout<<" ---------------------------- "<<endl;
    cout<<" Input your account number : ";
    cin>> id;
    
    for ( int i = 0; i < accNum ; i++ ){
        if (accArry[i].accID == id) {
            cout<<" ---------------------------- "<<endl;
            cout<<" Your Account Info "<<endl;
            cout<<" ---------------------------- "<<endl;
            cout<<" Account Number : "<<accArry[i].accID<<endl;
            cout<<" Customer Name  : "<<accArry[i].cusName<<endl;
            cout<<" Current Balance: "<<accArry[i].balance<<endl;
            cout<<" ---------------------------- "<<endl;
            cout<<" How much you will depost? "<<endl;
            cin>>Dep;
            accArry[i].balance = accArry[i].balance+Dep;
            cout<<" Your New Balance: "<<accArry[i].balance<<endl;
        }
    }
    
}

void BankAcc::WidthdrawACC(void){
    int id;
    int Dep;
    cout<<" ---------------------------- "<<endl;
    cout<<" You choose Withdraw "<<endl;
    cout<<" ---------------------------- "<<endl;
    cout<<" Input your account number : ";
    cin>> id;
    
    for ( int i = 0; i < accNum ; i++ ){
        if (accArry[i].accID == id) {
            cout<<" ---------------------------- "<<endl;
            cout<<" Your Account Info "<<endl;
            cout<<" ---------------------------- "<<endl;
            cout<<" Account Number : "<<accArry[i].accID<<endl;
            cout<<" Customer Name  : "<<accArry[i].cusName<<endl;
            cout<<" Current Balance: "<<accArry[i].balance<<endl;
            cout<<" ---------------------------- "<<endl;
            cout<<" How much you will withdraw ? "<<endl;
            cin>>Dep;
            accArry[i].balance = accArry[i].balance-Dep;
            cout<<" Your New Balance: "<<accArry[i].balance<<endl;
        }
    }
}

void BankAcc::TotalInfoACC(void){
    cout<<" ---------------------------- "<<endl;
    cout<<" You want to see Total Information"<<endl;
    cout<<" ---------------------------- "<<endl;
    for ( int i = 0; i < accNum ; i++ ){
        cout<<" "<<endl;
        cout<<" Account Number : "<<accArry[i].accID<<endl;
        cout<<" Customer Name  : "<<accArry[i].cusName<<endl;
        cout<<" Current Balance: "<<accArry[i].balance<<endl;
    }
}

void BankAcc::ExitProgramACC(void) {
    cout<<" You choose Exit Program "<<endl;
}
