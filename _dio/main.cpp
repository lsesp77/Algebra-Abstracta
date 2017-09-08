#include <iostream>
using namespace std;
#include <vector>

//v0=0, v1=1, u0=1, u1=0

int dio (int a, int b, int c){


    vector<int> u; vector<int> v;
    vector<int> res; vector<int> quo;

    res.push_back(a);
    res.push_back(b);
    u.push_back(1);u.push_back(0);
    v.push_back(0);v.push_back(1);

    cout<< "PASO 1 EUCLIDES: "<<endl<<endl;

    int acum=0;

	while(res[acum+1]!=0){

        cout<<res[acum]<<" = "<<res[acum+1]<<"("<<res[acum]/res[acum+1]<<")"<<" + "<< res[acum]%res[acum+1];

        quo.push_back(res[acum]/res[acum+1]);
        res.push_back(res[acum]%res[acum+1]);

        cout<<endl;

        acum++;
	}

    quo.pop_back();
    res.pop_back();

    int euclides = res[acum];

    cout<< euclides << endl;

    if(c%res[acum]!=0){
        cout<<"ERROR: NO TIENE SOLUCION."<<endl;
    }
    else{
        int d=c/res[acum];

        cout <<endl<< "TEST: "<<endl;

        for(int j=0;j<=acum;j++){
            cout<<"q: " <<quo[j]<<endl;
            cout<<"r: " <<res[j]<<endl;
        }

        cout<<"PASO 2 COEFICIENTES DE BEZOUT: " <<endl<< endl;

        for(int i=2; i<=acum; i++){

            int temp;
            int temp1;

            temp = u[i-2]-quo[i-2]*u[i-1];
            u.push_back(temp);
            cout<<"u"<<i<<" ="<<temp<<endl;

            temp1 = v[i-2]-quo[i-2]*v[i-1];
            v.push_back(temp1);
            cout<<"v"<<i<<" ="<<temp1<<endl;


            cout<<endl;
        }

        cout<<"q: ";
        for(int i=0; i<quo.size();i++){
            cout<<"|"<<"q"<<i<<" = "<<quo[i]<<" | ";
        }
        cout<<"\n";

        cout<<"u: ";
        for(int i=0; i<u.size();i++){
            cout<<"|"<<"u"<<i<<" = "<<u[i]<<" | ";
        }
        cout<<"\n";

        cout<<"v: ";
        for(int i=0; i<quo.size();i++){
            cout<<"|"<<"v"<<i<<" = "<<v[i]<<" | ";
        }
        cout<<"\n";

        cout<<"r: ";
        for(int i=0; i<res.size();i++){
            cout<<"|"<<"r"<<i<<" = "<<res[i]<<" | ";
        }
     /*
        cout<<"\n"<<endl;

        cout<<"-Comprobamos validez de los coeficientes: "<<a<<"u"<<" + "<< b<< "v" << "=" << "MCD"<<endl;
    */


}

int main() {

	int a; int b; int c;

    cout<<"INGRESE a,b y c: "<< endl;
	cin >> a >> b>>c;
	cout<<endl;
    cout<< "HA INGRESADO: "<< a <<"x"<<"+"<<b<<"y"<<" = "<<c<<endl<<endl;;
	dio(a,b,c);

	return 0;
}
