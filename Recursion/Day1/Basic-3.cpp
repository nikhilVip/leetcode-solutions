// PRINT TERMS FROM N TO 1
#include <iostream>

using namespace std;
void fun(int i,int n){
    if(i<1){
        return ;
      
    }
      cout<<i <<endl;
        fun(i-1,n);
}

int main()
{
    int n;
    cin>>n;
    fun(n,n);

    return 0;
}
// output
// n=5
// 5 4 3 2 1
