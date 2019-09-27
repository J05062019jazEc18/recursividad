#include<iostream>

using namespace std;

int main (){
	int num1,num2,opc;

void valores(int&,int&)	;
int mult(int,int);

	do{
		int m,dat1,dat2;
		
		cout<<"Eliga una opcion: "<<endl;
		cout<<"1.-Paso por Referencia "<<endl;
		cout<<"2.- Recursividad utilizando paso por valor "<<endl;
		cout<<"3.- Salir"<<endl;
		cin>>opc;
		cout<<endl;
		switch(opc){
			case 1: 
				cout<<"ingresa dos valores: "<<endl;
				cin>>num1;
				cin>>num2;
				valores(num1,num2);
			break;
				
			case 2:
				cout<<"ingresa dos numeros: "<<endl	;
				cin>>dat1;
				cin>>dat2;
				m=mult(dat1,dat2);
				cout<<"el resultado es: "<<m<<endl;	
				break;
		}
		
	}while(opc!=3);
	return 0;
}

void valores(int& valor1,int& valor2){
	cout<<"el valor del numero uno es: "<< valor1<<endl;

	cout<<"el valor del segundo mumero es: "<<valor2<<endl;
}

int mult(int num3,int num4){
	if (num3==0 or num4==0){
		return 0;
	}
	else{
	return num3+mult(num3,num4-1);
	}

}
