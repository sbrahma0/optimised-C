/*
Question: Suppose you have the GPA (Grade Point Average) of n 
number of students and you need to store and display it using C++. 
Can you write a program that accomplishes this?
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of studdents- ";
    cin>>num;
    
    float *ptr;
    ptr = new float[num];
    
    for (int i=0; i<num; ++i) 
    {
        cout<<"enter "<<i+1<<" student cgp- ";
        cin>>*(ptr+i);
        //cout<<endl;
    }
    
    cout<<"Displaying all the GPA \n";
    
    for (int i=0; i<num; ++i) 
    {
        cout<<i+1<<" student cgp- "<<*(ptr+i);
        cout<<endl;
    }
    
    return 0;
}
