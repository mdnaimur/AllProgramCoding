#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
#include <string.h> 
#include <limits.h>

using namespace std;

int main()
{
char light[101][18001];
int a, b, c, dat[101], cnt = 0, key, ans, hour, min, cycle = INT_MAX;

while(1)
{
for( a = 0; a < 101; a++ ) 
for( b = 0; b < 18001; b++ ) 
light[a] = '0';

cnt = ans = key = 0;
cin >> dat[cnt];

if( dat[cnt] != 0 ) 
{
while( 1 )
{
if( dat[cnt] == 0 ) break;
cnt++;
cin >> dat[cnt];
if( dat[cnt] < cycle ) cycle = dat[cnt];
}

// implementation
for( a = 0; a < cnt; a++ ) 
for( b = 0; b < 18001; b += (dat[a]*2) ) 
for( c = b; c < b + dat[a] - 5 && c < 18001; c++ ) light[a][c] = '1';


for( b = (cycle*2); b < 18001; b ++ ) 
{
key = 1;
for( c = 0; c < cnt; c++ ) 
{
if( light[c] != '1' ) 
{
key = 0;
break;
}
}
if( key ) 
{
ans = b;
break;
}
}

if( ans > 18000 || ans <= 0 ) 
printf( "Signals fail to synchronise in 5 hours\n" );
else // second translate to min, hour
{
hour = ans/3600, ans = ans%3600;
min = ans/60, ans = ans%60;
printf( "%02d:%02d:%02d\n", hour, min, ans );
}
}
else
{
cin >> dat[1] >> dat[2];
cnt = 2;
if( dat[1] == 0 && dat[2] == 0 )
break;
}
}

return 0;
}
