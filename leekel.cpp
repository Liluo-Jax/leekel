#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w=1;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)if(n%i==0)w++;
    printf("%d",w);
    return 0;
}