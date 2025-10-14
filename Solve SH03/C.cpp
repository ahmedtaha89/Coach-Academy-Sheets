#include <iostream>
using namespace std;
int main(){
int N,X=0;
cin >> N;

for(int i=0;i<N;i++){
string Bit;
cin >> Bit;
if (Bit == "++X" || Bit == "X++")
{
 ++X;
}
else {
 --X;
}
}
cout << X;

    return 0;
}