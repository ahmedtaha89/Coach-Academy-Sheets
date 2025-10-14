#include <iostream>
using namespace std;
int main(){

int N;
cin >> N;
int A,B,C;
int Sum = 0;

for(int i=0;i<N;i++){
 cin >> A >> B >> C;

    if(A+B+C>=2){
         Sum+=1;
    } 
}
cout << Sum;

    return 0;
}