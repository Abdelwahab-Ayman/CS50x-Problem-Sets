#include<iostream>
using namespace std;
/*
3. Recursion is an alternative to writing loops where a function “calls itself”. Write another version
of the factorial function that uses Recursion instead of loops.
What is one advantage and one
disadvantage of using Recursion as an alternative to loops?
*/
int num;
int fact(int x);
int main(){
cout<<"Please enter any number\n";
cin>>num;
cout<<"The Factorial of the num is : "<<fact(num);
return 0;
}
int fact(int x){
   if (x < 0){
    cout<<"Factorial is not for negative number"<<endl;
   }
   if (x == 0){
    return 1;
   }
   return x*fact(x-1);
}
//this is called recursion
//is iam using for loop it will be

