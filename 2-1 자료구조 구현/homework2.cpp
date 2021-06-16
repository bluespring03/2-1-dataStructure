//
//  homework2.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/06/16.
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   
    int n, m, i, j, p1=0, p2=0, p3=0;
    cout<< "A측의 가능한 날짜를 말하시오."; cin>>n;
    vector <vector<int>> A(n, vector<int>(5,0)); //31행 5열
    

    cout<<"A의 일정과 시간을 말하시오(예시: 17일 14~16시와 17~20시라면 17 14 16 17 20 )"<<endl;
    for(i=0; i<n; i++)
        for (j=0; j<5; j++){
        cin>>A[i][j];}
    sort(A.begin(), A.end());
    
    
    cout<< "B측의 가능한 날짜를 말하시오.";
    cin>>m; vector<int> b(m), c(m); // 벡터 c는 
    cout<<"B의 일정과 시간을 말하시오"<<endl;
  
    for(i=0; i<m; i++){cin>>b[i];}
    sort(b.begin(), b.end());//정렬!
    
    //교집합 찾기 시작
    while(p1<n && p2<m){
        if(A[p1]==b[p2]){
            c[p3++]=A[p1++];
            p2++;
        }
        else if(A[p1]<b[p2]){
            p1++;
        }
        else p2++;
    }
    
    for(i=0; i<p3; i++){
        cout<<c[i]<<" ";}
    cout<<endl;
    
    return 0;
}
