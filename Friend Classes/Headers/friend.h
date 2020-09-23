#ifndef FRIEND_H_INCLUDED
#define FRIEND_H_INCLUDED
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

#endif // FRIEND_H_INCLUDED