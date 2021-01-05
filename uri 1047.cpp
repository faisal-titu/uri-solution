#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,d,dh,dm;
    cin >> a >> b >> c >> d;
    dh = c-a;
    if(dh<0) dh=24+c-a;
    dm=d-b;
    if(dm<0)
    {
        dm=60+d-b;
        dh--;
    }
    if(a==c && b==d) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)\n";
    return 0;
}
