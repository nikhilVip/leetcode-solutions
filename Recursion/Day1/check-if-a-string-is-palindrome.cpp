//palindrome~a string reversal reads the same 

#include <iostream>

using namespace std;
bool fun(int i,string a,int n){
    if(i>=n/2){
       
        return true ;
      
    }
       
       if(a[i]!=a[n-i-1]){
           return false;
       }
        return fun(i+1,a,n);
   
        
}

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
   
    bool ans=fun(0,a,n);
    if(ans){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
   
    return 0;
}
