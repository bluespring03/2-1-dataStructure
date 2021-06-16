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
   
    int n, m, i;
    cout<< "A측의 가능한 날짜를 말하시오."; cin>>n;
    vector <vector<int>> A(n, vector<int>(3,0)); //세로 최대 31 가로 3

    cout<<"A의 일정과 시간을 말하시오(예시: 17일 14~16시라면 17 14 16 )"<<endl;
    for(i=0; i<n; i++) for(int j=0;j<3;j++) cin>>A[i][j];
    for(i=0; i<n; i++){
            if (A[i][1]>A[i][2])
            {cout<<"error.";return 0;}}
    sort(A.begin(), A.end());//퀵정렬!
    /**-------------------------------*/
    cout<< "B측의 가능한 날짜를 말하시오."; cin>>m;
    vector <vector<int>> B(m, vector<int>(3,0)); //세로 최대 31 가로 3
    vector <vector<int>> C(m, vector<int>(2,0)); //세로 =B의 날짜 수 m,  가로 2
    
    cout<<"B의 일정과 시간을 말하시오(예시: 17일 14~16시라면 17 14 16 )"<<endl;
    for(i=0; i<m; i++) for(int j=0;j<3;j++) cin>>B[i][j];
    for(i=0; i<n; i++){
            if (A[i][1]>A[i][2])
            {cout<<"error.";return 0;}} // 22-01 이런 경우는 안 됨
    sort(B.begin(), B.end());//퀵정렬!
    
//    A[p1][1]B[p2][1] A[p1][2]B[p2][2]
    //C[p3++][0]=A[p1++][0]; p2++;
    //C[p3++][0]=A[p1++][0]; //A벡터에 같은 값 중 하나를 집어넣고,
   // p2++;//A B C 벡터 인덱스 값을 모두 올려준다. (ㅁ++)
    int p1=0, p2=0, p3=0;
  
    //겹치는 부분 찾기 시작- p라는 가상의 포인터를 만들어서 같은 날짜가 있다면 p3벡터에 보관한다.
    while(p1<n && p2<m){
        if(A[p1][0]==B[p2][0]){
            
#1
            if(A[p1][1]==B[p2][1]){
                if(A[p1][2]<B[p2][2]){
                    C[p3][0]=A[p1][0];
                    p1++; p2++; p3++;;
                }
                else if(A[p1][2]==B[p2][2]){
                    C[p3++][0]=A[p1++][2];
                    p2++;
                }
                else if(A[p1][2]>B[p2][2]){
                    C[p3++][0]=B[p1++][2];
                    p2++;
                }
            }
#2
            else if(A[p1][1]<B[p2][1]){
                
                    if(A[p1][2]<B[p2][2]){
                        C[p3++][0]=A[p1++][2];
                        p2++;
                    }
                    else if(A[p1][2]==B[p2][2]){
                        C[p3++][0]=A[p1++][2];
                        p2++;
                    }
                    else if(A[p1][2]>B[p2][2]){
                        C[p3++][0]=B[p1++][2];
                        p2++;
                    }
                
                }
#3
            else if(A[p1][2]>B[p2][2]){
                C[p3++][0]=A[p1++][0];
                p2++;}
     
        }
        else if(A[p1][0]<B[p2][0]){ // 작은 것을 증가시켜야 하니까.
            p1++;
        }
        else p2++;
    }

    for(i=0; i<p3; i++)
        for(int j=0; j<2;j++)
            cout<<C[i][j]<<" "; cout<<endl;

    cout<<endl;
//
    return 0;
}


