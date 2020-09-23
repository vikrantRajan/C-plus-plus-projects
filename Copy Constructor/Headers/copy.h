#ifndef COPY_H_INCLUDED
#define COPY_H_INCLUDED
#include <vector>
using namespace std;

class Test
{
    public:
        float* x1;
        float* y1;
        float* x2;
        float* y2;
        Test();
        Test(const Test &);
        Test(float,float,float,float);
        ~Test();
};

#endif // COPY_H_INCLUDED