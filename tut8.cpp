// #include<iostream>
// using namespace std;
// int main(){
//     // int a =30;
//     // a = 69; //here the value of a is changed.
//     // cout<<a;


//     const int x = 69;  //this is constant and the value of x cannot be changed.

//     // x = 70 ; // here x will only be 69.
//    cout<<x;

//     return 0;
// }




// //manipulators are endl, setw(it uses iomanip header file)



#include<iostream>
#include<iomanip> //new header file used for setw .
using namespace std;

int main (){
    int a = 69;
    int b = 70;
    int c = 1007609690;

      cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;

    cout<<"the value of a is "<<setw(10)<<a<<endl;  //setw(number) isused as manipuator and the numbers printed in the output start from right instead of left.
    cout<<"the value of b is "<<setw(10)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;


//     //order of precedence(pls refer cppreference and type order of precedence in c++)
//     int a =5, b=9;
//     int c= a*b+89-5 ;// here computer will follow order of precedence to follow which sign to solve first

//     //     (((a*b)+89)-5) this is how this expression is solved bracket by bracket.
//     cout<<c;
  

    return 0;

}


