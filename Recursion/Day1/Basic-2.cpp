// PRINT 1 TO N
#include <iostream>

using namespace std;
void fun(int i,int n){
    if(i>n){
        return ;
      
    }
      cout<<i <<endl;
        fun(i+1,n);
}

int main()
{
    int n;
    cin>>n;
    fun(1,n);

    return 0;
}
// one more way 
#include <iostream>

using namespace std;
void fun(int i,int n){
    if(i<1){
        return ;
      
    }
   
        fun(i-1,n);
           cout<<i <<endl;
        
}

int main()
{
    int n;
    cin>>n;
    fun(n,n);

    return 0;
}
