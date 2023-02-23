//reverse an array 
#include <iostream>

using namespace std;
void fun(int l,int r,int a[]){
    if(l>=r){
       
        return ;
      
    }
       
       swap(a[l],a[r]);
       fun(l+1,r-1,a);
   
        
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fun(0,n-1,a);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
// one more way 
#include <iostream>

using namespace std;
void fun(int i,int a[],int n){
    if(i>=n/2){
       
        return ;
      
    }
       
       swap(a[i],a[n-i-1]);
       fun(i+1,a,n);
   
        
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fun(0,a,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
