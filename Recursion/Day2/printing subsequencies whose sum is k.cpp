#include <bits/stdc++.h>

using namespace std;
   void fun(int i,vector<int>&p, vector<int>&v,vector<vector<int>>&ans,int s,int sum){
   
       if(i==p.size()){
           if(s==sum){
              ans.push_back(v); 
           }
           
           return ;
       }
         v.push_back(p[i]);
         s+=p[i];
       fun(i+1,p,v,ans,s,sum);// take
        
         v.pop_back();
         s-=p[i];
       fun(i+1,p,v,ans,s,sum);// not take 
      
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
      vector<vector<int>> ans;
     fun(0,p,v,ans,0,sum);
    
     for(int i=0;i<ans.size();i++){
         for(int j=0;j<ans[i].size(); j++){
             cout<<ans[i][j];
         }
    cout<<" ";
}

    return 0;
}
