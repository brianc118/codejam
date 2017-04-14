#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <set>
#include <map>

using namespace std;

#define FILE "C-small-1-attempt0"
#define LONGUINT long long
#define LONGINT unsigned long long

#ifndef DEBUG
    #define DEBUG
#endif

#ifdef DEBUG
    #define D(x) cout << #x << " := " << x << endl;
#else
    #define D(x)
#endif

bool read_input();
void solve();

int main(int argc, char const *argv[]) {
#ifdef FILE
    cout << "INPUT:  " FILE ".in" << endl;
    ifstream in(FILE ".in");
    streambuf *cinbuf = cin.rdbuf(); //save old buf
    cin.rdbuf(in.rdbuf()); //redirect cin to in.txt!

    ofstream out(FILE ".txt");
    streambuf *coutbuf = cout.rdbuf(); //save old buf
    cout.rdbuf(out.rdbuf()); //redirect cout to out.txt!
#endif

    int test_cases; cin >> test_cases; cin.ignore();
    for (size_t Case = 1; Case <= test_cases; Case++) {
        cout << "Case #" << Case << ": ";
        solve();
    }

#ifdef FILE
    cin.rdbuf(cinbuf);   //reset to standard input again
    cout.rdbuf(coutbuf); //reset to standard output again
    cout << "OUTPUT: " FILE ".txt" << endl;
#endif
    return 0;
}

void solve() {
    LONGINT ans;
    cout << ans << endl;
}