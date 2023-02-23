//Multiple recursion calls
// fibonacci~ sum of previous 2 numbers
#include <iostream>

using namespace std;
int  fun(int n){
    if(n<=1){
       
        return n ;
      
    }
       
       return fun(n-1)+fun(n-2);
}

int main()
{
    int n;
    cin>>n;
   int ans=fun(n);
   cout<<ans<<endl;
   
    return 0;
}
