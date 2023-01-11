#include <iostream>
//#include <cctype>
using namespace std;

//Function for addition
void add ()
{
    double sum = 0;
    int count = 0;
    cout << "How many numbers would you like to add?: ";
    cin >> count;
    double addarray[count];
    for (int i = 0; i < count; i++) {
        cout << "Number" << i + 1 << ": ";
        cin >> addarray[i];
    }
    for (int i = 0; i < count; i++) {
        sum = sum + addarray[i];
    }
    cout << "The sum is: " << sum << endl;
}
//Function for division
void divi ()
{
    double num1 = 0; double num2 = 0;
    cout << "You chose Division!" << endl;
    cout << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "The quotient is " << (num1 / num2) << endl;
    cout << endl;
}
//Function for multiplication
void multi ()
{
    double product = 0;
    int count = 0;
    cout << "How many numbers would you like to multiply?: ";
    cin >> count;
    double multiarray[count];
    for (int i = 0; i < count; i++) {
        cout << "Number" << i + 1 << ": ";
        cin >> multiarray[i];
    }
    for (int i = 0; i < count; i++) {
        product = product * multiarray[i];
    }
    cout << "The product is: " << product << endl;
}
//Function for subtraction
void sub ()
{
    double diff = 0;
    int count = 0;
    cout << "How many numbers would you like to add?: ";
    cin >> count;
    double subarray[count];
    for (int i = 0; i < count; i++) {
        cout << "Number" << i + 1 << ": ";
        cin >> subarray[i];
    }
    for (int i = 0; i < count; i++) {
        diff = diff + subarray[i];
    }
    cout << "The diff is: " << diff << endl;
}
//Function to print separator
void separator ()
{
    cout << "**************************\n";
}

int main()
{
    int choice = 0;
    bool progOn = true;
    //Choice menu
    while (progOn != false) {
        separator ();
        separator ();
        cout << "Welcome to C++ Calc!    **" << endl;
        separator ();
        cout << "Calculator Modes:\n";
        cout << "(1)Addition" << endl;
        cout << "(2)Division" << endl;
        cout << "(3)Multiplication" << endl;
        cout << "(4)Subtraction" << endl;
        cout << "(5)Quit" << endl;
        separator ();
        cout << "Please make your selection: ";
        cin >> choice;
        cout << endl;
        
        switch (choice) {
            case 1:
                separator ();
                cout << "Calc Mode: Addition\n";
                add ();
                separator ();
                break;
            case 2:
                separator ();
                cout << "Calc Mode: Division\n";
                divi ();
                separator ();
                break;
            case 3:
                separator ();
                cout << "Calc Mode: Multiplication\n";
                multi ();
                separator ();
                break;
            case 4:
                separator ();
                cout << "Calc Mode: Subtraction\n";
                sub ();
                separator ();
                break;
            case 5:
                separator ();
                cout << "Exiting the program!\n";
                separator ();
                cout << endl;
                progOn = false;
                break;
            default:
                separator ();
                cout << "Invalid choice.\n";
                cout << "Please choose again!: ";
                cin >> choice;
                break;
        }
    }
    return 0;
}

