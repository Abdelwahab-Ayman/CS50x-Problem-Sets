#include<iostream>
using namespace std;
/*
2. Write a function called quotient which should take a double argument and an integer argument.
This function should also return a double data type. Now if you provide the quotient function
with the values 5 and 3 say, it should return the value 1.66667 or there-abouts. Test this by
calling the function within a cout statement. Once this works change the double argument to
an integer and notice the result; why does quotient no longer return a double?
*/
//because two typr of integars cannot be converted into double
//but double and integars the integars will prevails
//c++ follows a type heirarchy for implicit conversion
/*
char ---> int
int ---> float
float --->double
*/
//you can see explicit and implicit data conversion in conversion.md
/*type heirarchy in going forward not backowrd
and in function it`s needed to convert double to int and this cannot be in c++
*/
int a;
int b;
double qoutient (int x,int y){
   cout<<x/y<<endl;
};
int main(){
cout<<"Please enter number a"<<endl;
cin>>a;
cout<<"Please enter number b"<<endl;
cin>>b;
cout<<qoutient(a,b)<<endl;
return 0;
}

