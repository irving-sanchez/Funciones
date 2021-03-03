
//programa_04

#include <iostream>
using namespace std;

int Max(int a, int b);

int main(){
    int n1,n2,n3;
	cout<<"Introduzca el primer numero: "; 
	cin>>n1;
	cout<<"Introduzca el segundo numero: "; 
	cin>>n2;	
	cout<<"Introduzca el tercer numero: "; 
	cin>>n3;
	
	int max = Max(Max(n1,n2),n3);

	cout<<"El numero mayor es: "<<max;
		
	return 1;		
}

int Max(int a, int b){
	int c;
	if(a>b){ c=a; }
	else{  c=b;  }
  return c;
	
}

