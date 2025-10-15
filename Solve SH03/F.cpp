#include <iostream>
using namespace std;

int main(){

int A,B;

cin >> A >> B;
int counter=0;


 while (A <= B)
    {
        A*=3;
        B*=2;
        counter+=1;
    }

cout << counter;


    return 0;
}