//
//  ArrayBaseStack.h
//  2-1 자료구조 구현
//
//  Created by 수연 on 2021/04/05.
//

#ifndef ArrayBaseStack_h
#define ArrayBaseStack_h


#endif /* ArrayBaseStack_h */
//발상 대단해서 갖고옴.
int main()
{
    cin >> N;
    cout << "정렬전 : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    sort(v.begin(), v.end());

    cout << endl;
    cout << "정렬후 : " << endl;

    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

