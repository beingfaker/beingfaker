#include <bits/stdc++.h>
using namespace std;
int fac(int x){
   if(x==1){
       return x;
}
    else
    return x*fac(x-1);
}
int main(){
    int a;
    cin>>a;
    int ans=fac(a);
    cout<<ans;
    return 0;
}
