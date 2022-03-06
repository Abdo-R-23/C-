#include<iostream>
using namespace std;
// function definition to swap values
void swap(int &number1, int &number2) {
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

int main()
{

    // initialize variables
    int num1= 1, num2 = 2;

    cout << "Before swapping" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // call function to swap numbers
    swap(num1, num2);

    cout << "\nAfter swapping" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}