/*
 * @author    : macab (macab@debian)
 * @file      : ChefandNumberGame
 * @created   : Saturday Mar 02, 2019 14:48:46 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define clr(x)                x.clear()
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define psi                   pair<string, int>
#define pci                   pair<char, int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define mii                   map<int, int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
using namespace std;
/*
 * source : https://www.codechef.com/MARCH19B/problems/CHNUM
 * */
int main(){
    /*code goes here*/
    int t, n, max_size, min_size;
    ll ai;
    vector<ll> score;
    cin >> t;
    while(t--){
            cin >> n;
            max_size = min_size = 0;
            loop(i, 0, n){
                cin >> ai;
                if(ai > 0) ++max_size;
                if(ai < 0) ++min_size;
            }
            if(!min_size) min_size = max_size;
            if(!max_size) max_size = min_size;
            cout << max_size << " " << min_size << endl;

    }
    return 0;
}

