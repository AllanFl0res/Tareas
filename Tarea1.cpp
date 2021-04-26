//Allan Flores --- 61911499
#include <iostream>
#include <string>
using namespace std;

int main(){
	float peso,altura,BMI;
	string obsPeso;
	
	cout<<"Ingrese su peso en libras: ";cin>>peso;
	cout<<"\nIngrese su estatura en pulgadas: ";cin>>altura;
	
	BMI = ((peso)*703)/((altura)*(altura));
	
	
	if(BMI <= 18.5)
	{ 
		obsPeso = "Bajo Peso";	
	     }  
	else if(BMI>18.5 && BMI < 24.9 ){
		obsPeso = "Peso normal";
	}
	else if(BMI>24.9 && BMI< 29.9){
		obsPeso = "Sobrepeso";
	}
	else{
		obsPeso = "Obeso";
	}
	cout<<"\nSu BMI dio como resultado: "<<BMI;
	
	cout<<"\nY su indice de masa corporal es: "<<obsPeso;
	
	cout<<"\n\nValores de BMI ";
	
	cout<<"\nBajo peso ---> 18.5"<<endl;
	
	cout<<"Peso normal ---> 18.5 y 24.9"<<endl;
	
	cout<<"Sobrepeso ---> 24.9 y 29.9 "<<endl;
	
	cout<<"Obeso ---> 30 o mas "<<endl;
	
	return 0;
}
