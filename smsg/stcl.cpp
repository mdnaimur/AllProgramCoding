// CPP program to create an empty vector
// and one by one push values.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector< int > v,t;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 34 );
    v.push_back( 40);
     v.push_back( 1 );
    v.push_back( 21 );
    v.push_back( 34 );
    v.push_back( 4 );
    t=v;

    for(int i=0; i<t.size(); i++)
        cout << t[i] << endl;

       /*   map< string, int  > m;
    string goru;

    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }
    char line[1000];
    while( gets( line ) ) {
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ) v.push_back( num ); // :P
        sort( v.begin(), v.end() );
        // print routine
    }
*/
vector< int > nacho;
  reverse( nacho.begin(), nacho.end() );
    return 0;
}
