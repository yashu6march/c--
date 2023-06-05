#include<iostream>
using namespace std;

int c = 69;
int main(){
    int a,b,c; 
     
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c= a+b;
    cout<<"the sum of a and b is :"<<c<<endl;

    cout<<"the value of global c is "<<::c; //(::) scope variable operator == use to call the global varible of same name.
       
     
     // *******FLOAT, DOUBLE AND LONG DOUBLE LITERALS******8


    float f= 34.4;  //datatype used to store decimal value
    long double e = 34.4; //datatype used to store value of more decimal places. double has 2x precison than float
    // 34.4f (this is also a float number)
    // 34.4l this is also a long double

    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;// since no f or l is mentioned here, it is by default taken as double and not float
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl; //(sizeof)= it is used to find the size of the input in different datatype like float and long double 
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;


    cout<<"the value of f is "<<f<<endl<<"the value of e is "<<e;


    //**************REFERENCE VARIBLESS**********

    //FOR examble my name is yash, but mummy call me yashu and bubbu call me chomu. but i am only 1 person

    float x= 69;
    float &y =x;  //&y is a reference variable ad used to denote same as the main varible that is x.

    cout<<x<<endl;
    cout<<y<<endl;



    //**********TYPECASTING= used to convert variables into different variables, for ex int to float or float to int**


    int h =40;
    float i= 88.69;



    cout<<h<<endl;
    cout<<i<<endl;
    cout<<int(i)<<endl; //now the float b variable is converted to int varible
    cout<<(int)i<<endl;  //now the float b variable is converted to int varible

        return 0;
}