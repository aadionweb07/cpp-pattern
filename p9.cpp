/*


1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/






#include<iostream>
 using namespace std;
 int main(){
    int x,y;
    cin>>x;
    int count=1;
 
    int i=1;
    while(i<=x){
        int j=1;
        int x=i;
        while(j<=i){
            
            cout<< x<<" "  ;
            x=x+1;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
 }
