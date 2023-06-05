#include<iostream>
using namespace std;
int main(){

    // an array is a collection of of objects of similar types stored in contiguos memory location


    // syntax of an array
    // int name[size of array] = {x,y,z};


    int marks[5] = {1,3,5,3,9};// the array starts from 0, so the zeroth element of this array is 1.

    marks[3] = 6;  // we can also change the value of an array
     int* p = marks; 
     cout<<p<<endl; // address of array 
     cout<<*p<<endl;
    cout<<*(p+1);  //second element of array 

    cout<<marks[0]<<endl; //first element of array(zeroth number, because counting starts from zero)
     cout<<marks[1]<<endl;//second element
      cout<<marks[2]<<endl;//third element
       cout<<marks[3]<<endl; //forth element
        cout<<marks[4]<<endl;// fifth  element

    // // for loop to print the items of array

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"the value of element in "<<i<<" is "<<marks[i]<<endl;
    // }

    //while loop to pruint the items of array
    // int i = 0;
    // while (i<5)
    // {
    //     cout<<"the value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    
    
    //do while loop[ to print array items
    //int i = 0;
    // do
    // {
    //     cout<<"the value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<5);
    

    return 0;
}