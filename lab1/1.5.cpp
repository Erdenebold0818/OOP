#include <iostream>
using namespace std;

int anhniiToo(int n){  //
int i, s, j;
for(i = 1, s = 0; i < n; i++){
            if(n%i==0)
            s++;
        }
		return s;	
}

int main(){
    int i, s, n, j, a;
    cout<<"Hamgiin ehnii anhnii 10 too: \n";
    for(n = 2, j = 0; j < 10; n++){
        s = anhniiToo(n);
        if(s==1){
            cout<<n<<" ";
            j++;
        }
    }
}

//hamgiin ehnii anhnii 10 toog oloh funkts bich
