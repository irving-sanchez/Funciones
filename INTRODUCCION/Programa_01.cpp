
//programa_01

#include <iostream>
using namespace std;
//declaracion de funciones y procesdimientos
void suma(int a,int b);

int main(){
	int n1,n2;
  cout<<"Digita el primer numero: "; cin>>n1;
  cout<<"Digita el segundo numero: "; cin>>n2;
  suma(n1,n2);
	//la salida del main
	return 1;
}

//declaracion de funciones y procesdimientos
void suma(int a,int b){
	int c;
	c=a+b;
	cout<<"La suma de "<<a<<" mas "<<b<<" es igual a: "<<c;
	
}
