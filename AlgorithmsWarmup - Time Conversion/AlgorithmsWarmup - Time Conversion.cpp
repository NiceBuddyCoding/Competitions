#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int h, m, s;
    char ch, aorp;

    cin >> h >> ch >> m >> ch >> s >> aorp >> ch;
    h = (aorp == 'A') ? (h==12 ? 0 : h) : (h==12 ? 12 : h+12);

    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << ":"
         << setw(2) << setfill('0') << s << endl;

    return 0;
}
//**************** Editorial **********************
/*
#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}  */