//
//  3_연결리스트_자료구조_구현.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/01.
//

#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int readCount =0;
    int readData=0;
    int i;
    
    while(1){
        cout<<"put nummber: ";
        cin>>readData;
        if(readData<1) break;
        
        arr[readCount++]=readData;
    }
    for(i=0; i<readCount; i++) printf("%d ", arr[i]); //cout<<arr[i]<<" "보다 printf%d가 간편함
    return 0;
}
