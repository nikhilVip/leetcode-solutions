//PRINT SUM OF FIRST N NUMBERS 
#include <iostream>

using namespace std;
void fun(int i,int sum){
    if(i<1){
        cout<<sum <<endl;
        return ;
      
    }
       
        fun(i-1,sum+i);
          
        
}

int main()
{
    int n;
    cin>>n;
    fun(n,0);

    return 0;
}
// n=3
// 0+1+2+3=6
