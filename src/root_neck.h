#ifndef ROOT_NECK_H
#define ROOT_NECK_H

#include "root.h"

class Neck : public Root {
public:
    explicit Neck(IplImage*);
    void first_search(Vect<float> const&, Vect<float> const&);
    void bone();

    Vect<float> s;

private:
    float lenght_neck_hips;
    Vect<float> vect_hips;

};

#endif // ROOT_NECK_H
