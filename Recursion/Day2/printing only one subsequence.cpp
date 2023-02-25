#include <bits/stdc++.h>

using namespace std;
   bool fun(int i,vector<int>&p, vector<int>&v,int s,int sum){
   
       if(i==p.size()){
           if(s==sum){
              for(auto it:v){
                  cout<<it<<" ";
                //   cout<<endl;
              }
                                return true ;

           }else{
               return false;
           }
           
           
       }
         v.push_back(p[i]);
         s+=p[i];
         // take
       if(fun(i+1,p,v,s,sum)==true){
            return true ;
       }
      
        
         s-=p[i];
          v.pop_back();
       if(fun(i+1,p,v,s,sum)==true){
           return true;
       }// not take 
         return false;
   }
int main()
{
     int n;
     cin>>n;
     int sum;
     cin>>sum;
     vector<int>p(n);
     for(int i=0;i<n;i++){
         cin>>p[i];
     }
     vector<int>v;
      
     fun(0,p,v,0,sum);
    


    return 0;
}
