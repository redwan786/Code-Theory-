#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p, *q, *r, *s;

    p = new int();
    q = new int();
    r = new int();
    s = new int();

    *p = 3;
    *q = 8;
    *r = 10;
    *s = 12;

    //******** address print *******
    cout << p << endl;
    cout << q << endl;
    cout << r << endl;
    cout << s << endl;

    //******** address value print *******
    cout << *p << endl;
    cout << *q << endl;
    cout << *r << endl;
    cout << *s << endl;

    return 0;

}
