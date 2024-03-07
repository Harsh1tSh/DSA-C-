#include<conio.h> // getch() //holds the screen until user press any key
#include<iostream>// user input and output
#include<string>
using namespace std;

class atm
{
private:
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;

public:
    void setData(long int account_no_a, string name_a,int PIN_a, 
    double balance_a, string mobile_no_a)
    {
        account_no = account_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_no_a;
    }
    long int getAccountNo(){
        return account_no;
    }
    string getName(){
        return name;
    }
    int getPIN(){
        return PIN;
    }
    double getBalance(){
        return balance;
    }
    string getMobileNo(){
        return mobile_no;
    }
    //setMobile function is updating the user mobile no
    void setMobile(string mob_prev, string mob_new)
    {
        if(mob_prev==mobile_no){
            mobile_no = mob_new;
            cout << endl << "Successfully updated the mobile no.";
            _getch();
        }
        else
        {
            cout << endl << "Incorrect mobile no";
            _getch();
        }
    }
    void cashWithDraw(int amount_a)
    {
        if(amount_a > 0 && amount_a < balance)
        {
            balance -= amount_a;
            cout << endl << "Please collect your cash";
            cout << endl << "Avaliable Balance : " << balance;
            _getch();
        }
        else
        {
            cout << endl << "Invalid input or Insufficient Balance";
        }
    }
};

int main()
{
    int choice = 0, enterPIN;
    long int enterAccountNo;

    system("cls"); // cleaning the screen
    atm user1;

    user1.setData(1234567,"Tim",11111,45000.90,"9087654321");

    do
    {
        system("cls");
        cout << endl << "Welcome to ATM" << endl;
        cout << endl << "Enter your account number: ";
        cin >> enterAccountNo;

        cout << endl << "Enter PIN : ";
        cin >> enterPIN;

        if((enterAccountNo == user1.getAccountNo()) &&
        (enterPIN == user1.getPIN()))
        {
            do
            {
                int amount = 0;
                string oldMonileNo, newMobileNo;
                system("cls");
                //user interface
                cout << endl << "Welcome to ATM" << endl;
                cout << endl << "Select option";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash Withdrawl";
                cout << endl << "3. Show user details";
                cout << endl << "4. Update Mobile No.";
                cout << endl << "5. Exit" << endl;
                cin >> choice;

                switch(choice)
                {
                    case 1:
                        cout << endl << "Your balance is : " << user1.getBalance();

                        _getch();
                        break; 
                    
                    case 2:
                        cout << endl << "Enter the amount : ";
                        cin >> amount;
                        user1.cashWithDraw(amount);
                        break;
                    
                    case 3:
                        cout << endl << " User Details are : ";
                        cout << endl << "Account No : " << user1.getAccountNo();
                        cout << endl << "Name : " << user1.getName();
                        cout << endl << "Blance : " << user1.getBalance();
                        cout << endl << "Mobile No. : " << user1.getMobileNo();

                        _getch();

                    case 4:
                        cout << endl << "Enter Mobile No. ";
                        cin >> oldMonileNo;
                        cout << endl << "Enter New Mobile No. ";
                        cin >> newMobileNo;

                        user1.setMobile(oldMonileNo,newMobileNo);
                        break;

                    case 5:
                        exit(0);
                    
                    default:
                        cout << endl << "Enter Valid Data !!";
                }

            }while(1);
        }
        else
        {
            cout << endl << "User Details are Invlid!!";
            _getch();
        }

    } while(1);

    return 0; 
    
}

