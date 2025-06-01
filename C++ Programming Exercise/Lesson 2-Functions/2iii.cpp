
#include<iostream>
using namespace std;
/*
3. Write a “calculator program” which asks for two numbers and a mathematical operator
(represented as a char type. Depending on the operator (+, -, * or /) call the appropriate function
and display the result. Use a switch statement to filter the choices.
*/
char opr;
int num1,num2;
int main(){
cout<<"Hello In calculator Programm"<<endl;
cout<<"Please Enter First Number"<<endl;
cin>>num1;
cout<<"Please Enter Second Number"<<endl;
cin>>num2;
cout<<"Please choose the operator"<<endl;
cout<<"+ or - or / or * \n";
cin>>opr;
switch(opr){
  case '+':
    cout<<num1+num2<<endl;
    break;
  case '-':
    cout<<num1-num2<<endl;
    break;
  case '*':
    cout<<num1*num2<<endl;
    break;
  case'/':
    cout<<num1/num2<<endl;
    break;
  default:
    cout<<"the operator is not correct"<<endl;
    break;
};
//note that the break sentences if not existence it will run all the cases
//note  that case is of type of the switch 
//note that case will take argument of the type of swiotch is int it will be int if char it will be '' and if string it will be ""
return 0;
}

