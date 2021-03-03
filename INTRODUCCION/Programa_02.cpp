
//programa_02

#include <iostream>
using namespace std;

void Mayor(int a,int b);

int main(){
	int n1,n2;
	cout<<"Digite el primer numero: ";  cin>>n1;
	cout<<"Digite el segundo numero: ";  cin>>n2;
	Mayor(n1,n2);
	
	return 1;
}
void Mayor(int a,int b){
	
	if(a>b){
		cout<<"EL mayor es: "<<a<<endl;
	}else if(a<b){
		cout<<"El mayor es: "<<b<<endl;
	}else
	    cout<<"\n\tSon iguales "<<endl;
}

