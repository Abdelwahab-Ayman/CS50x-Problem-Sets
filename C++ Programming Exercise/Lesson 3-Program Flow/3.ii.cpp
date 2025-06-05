#include<iostream>
using namespace std;
/*
2. Write another function that continuously asks for numbers (use cin), until the user provides a
 negative number. You’ll need some kind of loop and you should make use of the function you
 created in Exercise 1.
*/
int num1;
int fun(int x);
int main(){
cout<<"Please Enter any number\n";
cin>>num1;
fun(num1);

return 0;
}
int fun(int x){
   if(x>0){
    cout<<"Please Enter negative number";
   }else{
    fun(x);
   }
  return x;
}


