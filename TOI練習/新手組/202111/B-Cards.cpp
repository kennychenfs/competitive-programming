#include <iostream>
#define Hirasawa_Yui_My_Wife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=3e2+10;
int n,m,l[N][2];
int main(){
    Hirasawa_Yui_My_Wife
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>l[i][0];
	int a=1,b=0;
	for(int i=1;i<=m;++i){
		swap(a,b);//a to b
		for(int s=1;s<=n>>1;++s){
			int t=s+(n>>1);
			l[2*s-1][b]=l[s][a];
			l[2*s][b]=l[t][a];
		}
	}
	for(int i=1;i<=n;++i)cout<<l[i][b]<<' ';
}
