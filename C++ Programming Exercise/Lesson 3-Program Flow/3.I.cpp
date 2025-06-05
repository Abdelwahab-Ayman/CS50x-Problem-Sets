#include<iostream>
using namespace std;
/*
Write a function that accepts an integer argument and returns a boolean value. The function
should return true if the integer argument is greater than or equal to zero, and false otherwise.
Call this function with a positive and negative value to test that it works, using cout to display
the result.
*/
bool fun(int a);
int main(){
int x;
cout<<"Please Enter any Integar\n";
cin>>x;
cout<<fun(x);
return 0;
}
bool fun(int a){
 if (a>=0){
    cout<<"true\n";
    //return true;
    //will return 1
 }else{
    cout<<"false\n";
    //return false;
    //will return 0
 }
};

