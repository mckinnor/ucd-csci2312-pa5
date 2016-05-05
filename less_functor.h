//
// Created by ryanm on 5/5/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <iostream>
namespace CS2312 {
    template<typename F>
    class less {
    public:
        bool operator() (const F& arg, const F& arg2) const {return (arg < arg2);}
    };

    template<>
    class less<string>{
    public:
        bool operator() (const string &arg, const string &arg2){return (arg < arg2);}
    };

    template<>
    class less<const char *>{
    public:
        bool operator() (const char *arg, const char *arg2){
            string a, b;
            a = arg;
            b = arg2;
            return a < b;
        }
    };

}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
