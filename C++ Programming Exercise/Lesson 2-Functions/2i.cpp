#include<iostream>
using namespace std;
/*
1. Not every function we may write has to return a value. Write a function called product which
accepts two integers as arguments (like add and minus) but returns no value. In the function
body the product function should use Cout to print the product directly to screen.
*/
int num1, num2;
void product(int x,int y){
     cout<< x+y<<endl;
};
int main(){
cout<<"enter num1"<<endl;
cin>>num1;
cout<<"enter num2"<<endl;
cin>>num2;
cout<<"the result is"<<endl;
product(num1,num2);
return 0;
}

