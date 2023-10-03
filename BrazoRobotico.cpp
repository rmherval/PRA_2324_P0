
#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

 BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando){
                this->x = x;
                this->y = y;
                this->z = z;
                this->sujetando = sujetando;
        }

        double BrazoRobotico::getx(){
        return x;
        }

        double BrazoRobotico::gety(){
        return y;
        }

        double BrazoRobotico::getz(){
        return z;
        }

        bool BrazoRobotico::getsujetando(){
        return sujetando;
        }

        void BrazoRobotico::coger(){
 	sujetando = TRUE;
        }

        void BrazoRobotico::soltar(){
        sujetando = FALSE;
        }

        void BrazoRobotico::mover(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
        }

