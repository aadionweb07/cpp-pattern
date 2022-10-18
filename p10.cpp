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
            
            cout<< i-j+1 <<" "  ;
           // x=x+1;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
 }
