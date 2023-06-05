#include<iostream>
using namespace std;
int main(){
     
      //break statemenmt

    // for(int i = 0; i<10; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==4) // here it will print 4, because the break atatement is after cout statement
    //     break; // here the condition becomes, that if i becomes 4, the break statement will dtop the loop right away.
    //}


    // for(int i = 0; i<10; i++)
    // {
       
    //     if(i==4) 
    //     break;    // here it will not print 4, because after i bcomes 4, it will break and cout will not execute
    //      cout<<i<<endl;
    // }


        // continue statement

        for (int i = 0; i < 10; i++)
        {
            if(i==5){
                continue;//here when i becomes 5, the continue will skip the loop for 1 time and then continue, so it will not print 5
            }
            cout<<i<<endl;
        }
        


    return 0;
}