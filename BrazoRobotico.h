#ifndef __BRAZOROBOTICO_H__
#define __BRAZOROBOTICO_H__

class BrazoRobotico{

        private:
        double x,y,z;
        bool sujetando;


        public:
        BrazoRobotico(double x, double y, double z, bool sujetando);

        double getx();

        double gety();

        double getz();

        bool getsujetando();

        void coger();

        void soltar();

        void mover(double x, double y, double z);

};
#endif

