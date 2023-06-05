#include<iostream>
using namespace std;
int glo =6; //this is a global variable because it is defined outside main fuction
int main(){
    // int a = 4;
    // int b = 69;

    //for same data type ,we can combine the varible is a single line using coma
    int a=4, b=69;
    float pi= 3.14;
    char c = 'd';//in the syntax of char varible, the value should be stored in colons.
    int glo=9; //this is a local variable defined inside main fuction with same name as global varible
    bool sexy = true; //value of true is 1 and false is zero.
   glo=69; //updated glo value will be shown
    // cout<<"this is tutorial 4, the value of a is "<<a<<"\n the value of b is "<<b;
    // cout<<" \nthe value of pie is "<<pi;
    // cout<<"\nthe value of c is "<<c;
    cout<<glo<<sexy; //int he output precedence will be given to local variable
 // (\n= backslash n) is an escape sequence character and used for line break and tranfer text to next line
        return 0;
}