//
//  포인터.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/20.
//

#include <iostream>
using namespace std;
int main(){
    
    //**포인터 개념
    int a=1;
    int *ptr_a; // int *ptr_a=&a;라고 선언해도 된다.
    ptr_a=&a; //*ptr_a=&a; 는 아니다. ptr이 가리키고 있는 변수에 a의 주소값을 집어넣겠다는 소리가 되니까.
    cout<<"ptr_a가 나타내는 것은:"<<ptr_a;

    //****포인터도 변수라서 이리저리 바꿀 수 있다.
    int a=10;
    int b=20, *ptr;
    ptr=&a;
    cout<<"ptr이 가리키는 것은(*ptr):"<<*ptr;
    ptr=&b;
    cout<<"\nptr이 가리키는 것은(*ptr):"<<*ptr;
    cout<<"\n*&b이 가리키는 것은(*ptr):"<<*&b<<endl; //*ptr=*&b;
    
//****잘 쓰이지 않는 것. 이중 포인터
    
    int a=3;
    
    int *ptr_a;
    ptr_a=&a;
    
    int **ptr_ptr;
    ptr_ptr=&ptr_a;
    
    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<ptr_a<<"\n";
    cout<<*ptr_a<<"\n";
    cout<<&ptr_a<<"\n";
    cout<<ptr_ptr<<"\n";
    cout<<*ptr_ptr<<"\n";
    cout<<**ptr_ptr<<"\n";
    
    
    return 0;
}

