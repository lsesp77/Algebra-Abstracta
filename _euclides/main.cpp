#include <iostream>
using namespace std;



int euclides (int a, int b){

	if(b==0)

		return	a;

	else {

		int r = b;
		int r1 = a%r;


        cout<< a << "= " << b <<"*"<< a/b << "+" << r1 << endl<<endl;

        int c= a/b;



	   return  euclides( r , r1  );
	}

}



int main() {

	int a; int b;
	cout<< "-Ingrese los numeros a sacar MCD: "<< endl;
	cout<< "a: "; cin >> a; cout<<"b: "; cin>> b;
	cout<<endl;

	cout<<"Desarrolo del algoritmo: \n"<<endl ;
	cout <<"-MCD "<<"("<<a<<","<<b<<"):  "<< euclides (a,b)<<"\n"<<endl;


	return 0;
}
