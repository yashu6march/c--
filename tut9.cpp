#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age ";
    cin>>age;
//selection control structure : if-else ladder
    // if(age<18){
    //     cout<<"youre a minor";

    // }
    // else if(age==18){
    //     cout<<"permission required";
    // }
    // else{
    //     cout<<"you can come to the party";
    // }


    //selection control structure : switch statement

    switch (age)
    {
    case 18:   // here : is printed instead of ;
    cout<<"youre a minor";
        break; // if this case is true this breAK STATEMENT will exit this program right away, 

        case 20:
        cout<<"youre not a minor";

    
    default:  //if any above switch statement is not true then this default statement will be printed
    cout<<"no special cases";
        break; 
    }

    return 0;

}