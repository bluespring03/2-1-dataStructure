//
//  homework.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/06/10.
//

/**이분검색을 활용한 자료 구현*/

#include <iostream>
using namespace std;
#include<algorithm>

int a[1001], n; // a[1001] 은 레코드 길이를

int Count(int s){
    int i, cnt=1, sum=0;
    for(i=1; i<=n; i++){
        if(sum+a[i]>s){
            cnt++;
            sum=a[i];
        }
        else sum=sum+a[i];
    }
    return cnt;
}

int main(){
    int m, i, lt=1, rt=0, mid, res, maxx=-2147000000;
    cout<< "n m 입력하시오"<<endl;
    cin>>n>> m;
    
    cout<<"1번부터 n번호까지 입력하시오."<<endl;
    for(i=1; i<=n; i++){
        cin>>a[i];
        rt=rt+a[i];
        if(a[i]>maxx) maxx=a[i];
    }
    
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(mid>=maxx && Count(mid)<=m){
            res=mid;
            rt=mid-1;
        }
        else lt=mid+1;
    }
    
    cout<<res<<endl;
    
    return 0;
}
