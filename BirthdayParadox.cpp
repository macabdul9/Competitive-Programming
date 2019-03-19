/*
 * @author    : macab (macab@debian)
 * @file      : BirthdayParadox
 * @created   : Tuesday Mar 19, 2019 02:58:49 IST
*/
#include<bits/stdc++.h>
#define endl                  "\n"
#define merge(a, b)           a##b
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
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
#define vll                   vector<long long int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define sll                   set<long long int>
#define mii                   map<int, int>
#define mll                   map<long long int, long long int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;
// what is the min no of person req that the probablity of having same birthday of two ppl is 50%
int main(){
	ios::sync_with_stdio(0);

	/*your code goes here*/
    float num = 365;
    float den = 365;
    int n = 0; // no person required
    float p = 1; // probaballity of having diff birthday
    // so far we have figured out that if there's is 0 person then probablity of having diff birth is 100% (or 1)
    while(p > 0.5){
        p = p*(num/den);
        --num;
        n++;
    }
    cout << n << endl;
	return 0;
}

