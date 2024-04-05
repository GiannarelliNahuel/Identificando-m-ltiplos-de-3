#include <iostream>
#include <string>
using namespace std;

bool EsMultiplode3 (int n){
	
bool bandera =false;

if(x%3==0){
	bandera= true;
}
 return bandera;
}


int main () {
int x;
string cartel ="no es multiplo";


cout<<"digite un numero: ";
cin>>x;


if(EsMultiplode3 (x)){
	cartel="es multiplo";
}


 cout<<cartel<<endl;
 
 
	return 0;
}
