#include <iostream>
using namespace std;

//Function to print separator #1
void separator1 ();

//Function to print separator #2
void separator2 ();

//Function for addition
void add ();

//Function for division
void divi ();

//Function for multiplication
void multi ();

//Function for subtraction
void sub ();

int main()
{
    int choice = 0;
    bool progOn = true;
    //Choice menu
    while (progOn != false) {
        cout << endl;
        separator1 ();
        cout << "*** Welcome to C++ Calc! ***" << endl;
        separator1 ();
        cout << "Calculator Modes:\n";
        cout << "(1) Addition" << endl;
        cout << "(2) Subtraction" << endl;
        cout << "(3) Multiplication" << endl;
        cout << "(4) Division" << endl;
        cout << "(5) Quit" << endl;
        separator1 ();
        cout << "Please make your selection: ";
        cin >> choice;
        cout << endl;
        
        switch (choice) {
            case 1:
                separator2 ();
                cout << "Calc Mode: Addition\n";
                add ();
                separator2 ();
                cout << endl;
                break;
            case 2:
                separator2 ();
                cout << "Calc Mode: Subtraction\n";
                sub ();
                separator2 ();
                break;
            case 3:
                separator2 ();
                cout << "Calc Mode: Multiplication\n";
                multi ();
                separator2 ();
                break;
            case 4:
                separator2 ();
                cout << "Calc Mode: Division\n";
                divi ();
                separator2 ();
                break;
            case 5:
                separator2 ();
                cout << "Exiting the program!\n";
                separator1 ();
                cout << endl;
                progOn = false;
                break;
            default:
                separator2 ();
                cout << "Invalid choice.\n";
                cout << "Please choose again!: ";
                cin >> choice;
                break;
        }
    }
    return 0;
}

//Function to print separator 1
void separator1 ()
{
    cout << "****************************\n";
}

//Function to print separator 2
void separator2 ()
{
    cout << "============================\n";
}

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

//Function for subtraction
void sub ()
{
    double num1 = 0; double num2 = 0;
    cout << "Choose two numbers for subtraction!" << endl;
    cout << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "The difference is " << (num1 - num2) << endl;
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

//Function for division
void divi ()
{
    double num1 = 0; double num2 = 0;
    cout << "Choose two numbers for division!" << endl;
    cout << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "The quotient is " << (num1 / num2) << endl;
}