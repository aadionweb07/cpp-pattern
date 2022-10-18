/*




1 
2 3
4 5 6
7 8 9 10

*/




#include<iostream>
 using namespace std;
 int main(){
    int x;
    cin>>x;
    int count=1;
 
    int i=1;
    while(i<=x){
        int j=1;
        while(j<=i){
            
            cout<<count<<" "  ;
            count++;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
 }
