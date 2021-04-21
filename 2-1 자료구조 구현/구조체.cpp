//
//  구조체.cpp
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/20.
//

#include <iostream>
using namespace std;

int main(){
    //***typedef :  자료형을 정의한다. 자바에서 질리도록..본 것 같어.,
    typedef int Int32;
    Int32 n=20; //int n=20;인데 32비트짜리라는 것을 직관적으로 볼 수 있으려고.
    
    //***구조체 형성
    typedef struct
    {int x;
    int y;
    char name[100];
    } Point; //=struct Point {int x,y;} ; 간단하지만 직관적이지 않아서 쓰는 사람 마.음!
    
    Point p={3, 7, "사과"};
    printf("%d %s\n", p.x, p.name);
    Point *ptr=&p; //배열 가리키는 포인터 만들기.
    
    printf("%d %d\n", (*ptr).x ,ptr->x); // (*a).b==a->b;
    ptr->x=50;
    cout<<ptr->x;
    
    return 0;
    
}
