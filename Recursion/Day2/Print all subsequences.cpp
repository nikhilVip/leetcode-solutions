// subsequence ~ A contigous/non-contigous sequences which follows the order
#include <bits/stdc++.h>

using namespace std;
   void fun(int i,vector<int>&p, vector<int>&v,vector<vector<int>>&ans){
   
       if(i==p.size()){
           ans.push_back(v);
           return ;
       }
      v.push_back(p[i]);
       fun(i+1,p,v,ans);// take
        v.pop_back();
         
       fun(i+1,p,v,ans);// not take 
      
   }
int main()
{
     int n;
     cin>>n;
     vector<int>p(n);
     for(int i=0;i<n;i++){
         cin>>p[i];
     }
     vector<int>v;
      vector<vector<int>> ans;
     fun(0,p,v,ans);
    
     for(int i=0;i<ans.size();i++){
         for(int j=0;j<ans[i].size(); j++){
             cout<<ans[i][j];
         }
    cout<<" ";
}

    return 0;
}
// Number of subsequences =2^n
// tc 2^n*n
//sc O(N)
