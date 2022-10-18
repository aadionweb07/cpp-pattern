/*
AAAA
BBBB
CCCC
DDDD
 */
 
 
 
 
 
 #include<iostream>
 using namespace std;
 int main(){
    int s;
    cin>>s;
    int count=1;
 
    int i=1;
    char ch= 'A';
    while(i<=s){
        int j=1;
        
        while(j<=s){
            char ab='A'+i-1;
            
            cout<< ab;
           // a=a+1;
            j=j+1;
            

        }
        cout<<endl;
        
        i=i+1;

    }
 } 
