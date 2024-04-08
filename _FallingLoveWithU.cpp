#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    cout<<"                    Love you to the moon and back <3 <3 <3                  \n";
    
        int n=12; 
        for(int i=-3*n/2;i<=n;i++){
            for(int j=-3*n/2;j<=3*n/2;j++){
            if((abs(i)+abs(j)<n)||((-n/2-i)*(-n/2-i)+(n/2-j)*(n/2-j)<=n*n/2)||((-n/2-i)*(-n/2-i)+(-n/2-j)*(-n/2-j)<=n*n/2)){
                   cout<<"+ ";
               }
               else{
                   cout<<"  ";
               }
            }
               cout<<"\n";
        }       
	return 0;
}
