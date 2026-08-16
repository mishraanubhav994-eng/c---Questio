#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;

    while(T--){

        int A,B,C;
	    cin>>A>>B>>C;
	   
	   
	   int x = max(A,B);
	   int y = max(x, C);
	   
	   cout<<y<<endl;

    }

}
