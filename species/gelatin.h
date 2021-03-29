#ifndef GELATIN_H
#define GELATIN_H
#include<string>
/**
 Copyright Notice:
 Author: Hari Ram Gurung
 All rights reserved;
 ***/
class Gelatin
{
    private:
        double _weight;
        string _shape;
        static int _idgen;
    public:
        double weight();
        string shape();
        void morph(string s -"");
        Gelatin split();
        friend bool operator |- (const Gelatin &n, const Gelatin &o);


};
#endif