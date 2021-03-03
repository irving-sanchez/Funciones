
//programa_05

#include <iostream>
using namespace std;

int Factorial(int a);

int main(){
	int n1;
    cout<<"introduzca el valor del numero: ";
    cin>>n1;
    	
    int fact=Factorial(n1);
	cout<<"De "<<n1<<"! su factorial es: "<<fact<<endl;
		
	return 1;
}

int Factorial(int a){
	int i;
	int resultado=1;
	for(i=1; i<=a; i++){
		resultado=resultado*i;
	}
	return resultado;
}
