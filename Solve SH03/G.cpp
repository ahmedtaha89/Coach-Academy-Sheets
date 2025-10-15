#include <iostream>
using namespace std;

int main(){

int A,B;
cin >> A >> B;

for(int i=0;i<B;i++){
  int Mod_Number = A%10;    
    if(Mod_Number == 0){
        A/=10;
    }
    if(Mod_Number !=0){
         A-=1;
    }

}
cout << A;
    return 0;
}
