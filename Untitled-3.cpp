#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(int a, int b, int c, int d);
        int ans;
        if(a>b&&b>c&&c>d)
            ans=a;
        
        else if(b>c&&c>d)
            ans=b;
        
        else if(c>d)
            ans=c;
        
        else
            ans=d;
    return ans;
    printf("%d", ans);
    
    return 0;
}
