#include <iostream>

using namespace std;

int n,ans[1000],p[1000];

void c(int x){
    int jw = 0;
    for(int i = 1; i <= ans[0]; i++){
        ans[i] *= x;
        ans[i] += jw;
        jw=ans[i]/10;
        ans[i]%=10;
    }
    while(jw>0){
        ans[0]++;
        ans[ans[0]]=jw%10;
        jw/=10;
    }
}

int main()
{
    cin>>n;
    ans[0]=1;
    ans[1]=1;
    c(n);c(n-1);c(n-2);c(n-3);
    int k=0;
    for(int i=ans[0]-1;i>=1;i--){
        ans[i]+=ans[i+1]*10;
        k++;
        p[k]=ans[i]/24;
        ans[i]%=24;
    }
    int s=1;
    while(p[s]==0)s++;
    for(int i=s;i<=k;i++)cout<<p[i];
    cout<<endl;
    return 0;
}
