//
//  2_큐_자료구조_구현.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/01.
//

typedef int Data ;

typedef struct _node{
    Data data;
    struct _node *next;
    
}

#include <iostream>
using namespace std;
int main(){
    int a=1;
    int *ptr_a;
    ptr_a=&a;
    
    cout<<ptr_a;
    return 0;
}

