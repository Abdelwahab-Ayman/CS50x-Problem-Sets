#include<iostream>
using namespace std;
/*
Amend the code to create an array of characters on the stack,
 which contains your full name (including room for a
space between your first and last names).
Now create a function which prints to screen your name
using the array you just created.
*/

string name[4]={"a","b","d","o"};
int main(){

 for(int i=0; i< 5; i++){
    cout<<name[i]<<" ";
};
return 0;
}

