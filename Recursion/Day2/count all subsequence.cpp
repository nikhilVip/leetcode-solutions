#include <bits/stdc++.h>
 using namespace std;
int fun (int i, vector < int >&p, int s, int sum) 
{ 
if (i == p.size ())
    {
if (s == sum)
	{ 
return 1;
}
else{ 
return 0;
}
} 
s += p[i];
    // take
int l = fun (i + 1, p, s, sum); 
s -= p[i];
int r = fun (i + 1, p, s, sum);
    // not take 
    return l + r;

}
int main () 
{
int n;
cin >> n;
int sum;
cin >> sum;
vector < int >p (n);
for (int i = 0; i < n; i++)
    {
cin >> p[i];
} 
vector < int >v;
cout << fun (0, p, 0, sum); 
return 0;
}


 
 
