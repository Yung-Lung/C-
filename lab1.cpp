#include<iostream>

using namespace std;

int main(){
    int a=22;
    cout << a << " ";
    while(a != 1){
	if (a%2 == 1) a=a*3+1;
	else a=a/2;
	cout << a << " ";
    }
    cout << endl;
    return 0;
}
