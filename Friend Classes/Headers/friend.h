#ifndef COMPARISON_H_INCLUDED
#define COMPARISON_H_INCLUDED
class B; // pre declaring class to use in first function

class A
{
    public:
        void setPrivateValue(B &, int);
        
};
class B
{
    friend class A;
    int privateValue;
    public:
        int getPrivateValue() { return privateValue; }
};

#endif // COMPARISON_H_INCLUDED