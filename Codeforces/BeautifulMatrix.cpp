#include <iostream>
using namespace std;

int main(){
	int a[5][5];
	int res = 0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j] == 1){
				if(i > 2){
					res = res + i - 2;
				}
				else
					res = res + 2 - i;
					
				if(j > 2)
					res = res+ j - 2;	
				else
					res = res+ 2 - j;
			}
		}
	}
	cout << res;
	return 0;
}
