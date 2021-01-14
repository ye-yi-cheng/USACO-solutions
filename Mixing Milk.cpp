/*
ID: yeyiche1 
LANG: C++
TASK: milk
*/
#include<bits/stdc++.h> 
using namespace std;
int n;
int need;
int milksum=0;
int moneysum=0;

struct buy{
    int price;
    int available;
};

buy a[5001];

bool cmp(buy a,buy b){
    return a.price<b.price;
}

int main(){
    freopen("milk.in","r",stdin);
    freopen("milk.out","w",stdout);
    scanf("%d%d",&need,&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i].price,&a[i].available); 
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        milksum+=a[i].available;
        moneysum+=a[i].price*a[i].available;
        if(milksum>need){
            milksum-=a[i].available;
            int tmp=milksum;
            milksum+=need-milksum;
            moneysum-=a[i].price*a[i].available;
            moneysum+=a[i].price*(need-tmp);
            break;
        }
    }
    printf("%d\n",moneysum);
    return 0; 
}

