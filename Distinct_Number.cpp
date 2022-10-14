//Link : 
/* Notes :

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
#define int long long int
#define loop(a,b) for(int i=a;i<b;i++)
#define loop1(a,b) for(int i=a;i>=b;i--)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
ios_base::sync_with_stdio(false); cin.tie(NULL);
int t,n;
cin>>t;
set<int> st;
for(auto i=0;i<t;i++)
{
 int k;
 cin>>k;
 st.insert(k);
}
cout<<st.size()<<endl;
return 0;
}