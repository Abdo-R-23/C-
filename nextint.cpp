#include<iostream>
using namespace std;
void next(int &number1){
    int number2 = number1++;
}
int main(){
    int num1 = 6;
    cout << "befor next ";
    cout <<"num1 = "<< num1<<endl;
    next(num1);
    cout <<"after next";
    cout << num1;
}