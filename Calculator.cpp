#include <iostream>
using namespace std;

void add() {
    double number1, number2;
    cout <<"Enter the two numbers to add: "<< endl;
    cin >> number1;
    cin >> number2;
    double sum = number1 + number2;
    cout << number1 <<" + "<< number2 << " = " << sum << endl;
}

void subtract() {
    double number1, number2;
    cout << "Enter the two numbers to subtract: "<< endl;
    cin >> number1;
    cin >> number2;
    double sub= number1 - number2;
    cout << number1 << "-" << number2 << " = " << sub << endl;
}

void multi() {
    double number1, number2;
    cout << "Enter the two numbers to multiply: " << endl;
    cin >> number1;
    cin >> number2;
    double multiply = number1 * number2;
    cout << number1 << "*" << number2 << " = " << multiply << endl;
}

void divi() {
    double number1, number2;
    cout << "Enter the two numbers to divide: " << endl;
    cin >> number1;
    cin >> number2;
    double divide = number1 + number2;
    cout << number1 << "/"<< number2 <<" = "<< divide << endl;
}

int main(){
    char op,ch;
    do{
        cout << "Enter the mathamatical operation (+,-,*,/): " << endl;
        cin >> op;
        switch(op) {
            case '+':
                add();
                break;
            case '-':
                subtract();
                break;
            case '*':
                multi();
                break;
            case '/':
                divi();
                break;
            default:
                cout<<"Enter Valid Operand"<<endl;
        }
        cout << "Do you want to continue with the calculations?" << endl;
        cin >> ch;
        ch=tolower(ch);
    }while(ch=='y');

    return 0;
}