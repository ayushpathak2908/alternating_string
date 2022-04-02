#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int z=0;
       int o=0;
       for(int i=0;i<n;i++){
        if(s[i]=='0')
            z++;
        if(s[i]=='1')
            o++;
       }
       int ans=min(z, o);
       if(o==0||z==0){
          cout<<1<<endl;
       }
       else if(z==o){
          cout<<2*ans<<endl;
       }
       else{
        cout<<2*ans+1<<endl;
       }
    }

}
