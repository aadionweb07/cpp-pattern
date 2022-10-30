
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
    int var1,var2;
    cin>>var1;
    int count=1;
 
    int i=1;
    while(i<=var1){
        int j=1;
        int var1=i;
        while(j<=i){
            
            cout<< var1<<" "  ;
            var1=var1+1;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
   return 0;
 }
