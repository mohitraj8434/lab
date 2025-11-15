// Topic Practical -11 Date,

// Q use inline functions and macros to obtain the largest of 3 numbers

#include <iostream>
using namespace std;
#define LARGEST(a,b,c) ((a>b && a>c)? a: (b>c? b:c))
class Largest {
public:
    inline int largest (int x , int y , int z){
        if (x>y && x >z)
            return x ;
        else if (y>z)
            return y ;
        else
            return z ;
    }
};
int main (){
    int a, b,c;
    cout <<" Enter three numbers : ";
    cin >> a >> b >> c;
    Largest obj;
    cout <<"In Largest number using Inline Function:"<< obj. largest(a,b,c)<<endl;
    cout <<"In Largest number using Macro: "<<LARGEST(a,b,c)<< endl;
    cout <<"In Written by Mohit Kumar " << endl;
    cout <<"IT 2nd Shift " << endl;
    return 0;
}