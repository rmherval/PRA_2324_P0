#include <iostream>
#include "BrazoRobotico.h"
using namespace std;
int main(){

BrazoRobotico kuka(3.5, 4.6, 5.4, FALSE);
cout<<"La instancia creada tiene los datos siguientes: "<<endl<<"x:"<<getx();<<endl<<"y:"<<gety()<<endl<<"z:"<<getz()<<endl<<"¿Está cogiendo algo inicialmente? : "<<getsujetando()<<endl;

mover(2.7, 4.1, 5.0);
cout<<"El brazo se ha movido a: "<<"x: "<<getx()<<", "<<"y: "<<gety()<<", "<<"z: "<<getz()<<endl;

coger();
cout<<"¿El brazo tiene objeto? : "<<getsujetando()<<endl;


return 0;
}

