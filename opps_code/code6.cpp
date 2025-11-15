#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    char accountType;
    double balance;
public:
    void initialize(){
        cout<<"Enter the number of Depositor :";
        cin>>name;
        cout<<"Enter Account Number :";
        cin>>accountNumber;
        cout<<"Enter Account Type(sfor saving / c for current)";
        cin>>accountType;
        cout<<"Enter initial balance :";
        cin>>balance;
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited " << amount << " New Balance " << balance << endl;
    }
    void withdraw(double amount){
        if(balance - amount >=10000){
            balance -= amount;
            cout <<"Withdraw "<< amount <<" New Balance:"<< balance<<endl;
        }
        else{
            cout <<"Withdrawal denied: Balance must stay above 10000"<<endl;
        }
    }
    void display(){
        cout <<"Name: "<< name << endl;
        cout <<"Account Number: "<< accountNumber << endl;
        cout <<"Account Type: "<< (accountType == 's'?"Savings ":"Current")<< endl;
        cout <<"Balance: "<< balance << endl;
        cout <<"---------------------" << endl;
    }
};

int main(){
    int n;
    cout <<"enter number of customers(max10): ";
    cin >> n;
    BankAccount customers[10];
    for(int i=0; i<n;i++){
        cout <<"InEnter details for customer"<<i+1<<": "<< endl;
        customers[i].initialize();
    }
    for(int i=0; i<n; i++){
        cout <<"In--- Transactions for Customer"<<i+1<<"---"<< endl;
        int choice;
        double amount;
        cout << " 1. Deposit\n 2. Withdraw\n 3. Skip\n Enter choice : ";
        cin >> choice ;
        if( choice ==1){
            cout <<" Enter amount to deposit : ";
            cin >> amount;
            customers [i]. deposit(amount);
        }
        else if ( choice==2){
            cout <<"Enter amount to withdraw: ";
            cin>> amount;
            customers [i]. withdraw(amount);
        }
        customers [i]. display();
    }
    cout << " Written by Mohit Kumar" << endl;
    cout << "IT 2nd Shift"<< endl;
    return 0;
}
