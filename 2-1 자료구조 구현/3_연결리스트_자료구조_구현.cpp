//
//  3_연결리스트_자료구조_구현.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/01.
//
#include <iostream>
using namespace std;
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
} Node;

int main(){
    Node *head = NULL;
    Node *tail=NULL;
    Node *cur=NULL; //저장된 데이터의 조회에 사용되는 포인터 변수
    
    Node *newNode = NULL;
    int readData;
    
    //데이터 입력 과정
    while(1){
        cout<<"자연수를 입력하라: "; cin>>readData;
        if(readData<1) break;
        
        newNode =(Node*)malloc(sizeof(Node));
        newNode -> data = readData;
        newNode ->next = NULL;
        
        if(head==NULL)
            head=newNode;
        else
            tail->next = newNode;
    }
    
    //입력받은 데이터 출력과정
    cout<<"\n데이터 전체 출력";
    if(head==NULL) cout<<"nothing\n";
    else{
        cur=head;
        cout<<cur->data;
        
        while(cur->next!=NULL){
            cur=cur->next;
            cout<<cur->data;
        }
    }
    
    
    //메모리 해체과정
    if(head == NULL) return 0;
    else{
        Node*delNode=head;
        Node*delNextnode=head->next;
        
        cout<<"\n"<<head->data<<"를 삭제합니다.\n";
        free(delNode);
        
        while(delNextnode!= NULL){
            delNode=delNextnode;
            delNextnode = delNextnode->next;
            
            cout<<delNode->data<<"를 삭제합니다.";
            free(delNode);
        }
    }
    return 0;
    
    
    
}

