#include<iostream>
using namespace std;
int main(){
    int a=11, b=4;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the Arithmatic operators in C++"<<endl;

    //ARITHMATIC OPERATORS
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;//=0 because its is an int function so the output will not be decimal
    cout<<"the value of a%b is "<<a%b<<endl;// modula operator, defined below
    cout<<"the value of a++ is "<<a++<<endl;// print a and increase the value of a by 1, so a becomes 5
    cout<<"the value of a-- is "<<a--<<endl;// print a and decrease the value of a by1  so a again becomes 4
    cout<<"the value of ++a is "<<++a<<endl;// increase the value of a by 1 and print it
    cout<<"the value of --a is "<<--a<<endl;// decrease the value of a by 1 and print it
    cout<<endl;
    
    //ASSIGNMENT OPERATOR
    //used to assign value to the fuction
    // int a=6,  char b ='f'



    //COMPARISON OPERATORS
    cout<<"following are the comparison operators in C++"<<endl;

    cout<<"the value of a == b is "<<(a==b)<<endl; //if a=b, then true. true has value 1.
    cout<<"the value of a != b is "<<(a!=b)<<endl; // if a not equal to b then true
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<endl;


    //LOGICAL OPERATORS
    cout<<"following are the logical operators in C++"<<endl;
    cout<<"the value of logical operator (a==b) AND (a>b) is: "<<((a==b) && (a>b))<<endl;// this statement is true only if both (a==b) and (a>b) is true
    cout<<"the value of logical operator (a==b) OR (a>b) is: "<<((a==b) || (a>b))<<endl;// this statement is true when any of the condition is true
     cout<<"the value of logical operator (!(a==b))is: "<<(!(a==b))<<endl; // its a not operator and reverses the answer.
 

   
    return 0;

}

/*modula function(%) x%y= produces the remainder when x is divided by y.
return value = 
*If y completely divides x, the result of the expression is 0.
*If x is not completely divisible by y, then the result will be the remainder in the range [0, y-1]
x mod y <x/2 if x>=y and x mod y=x if x<y
*If y is 0, then division by zero is a compile-time error.*/
