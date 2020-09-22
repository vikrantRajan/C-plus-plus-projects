#ifndef RESULT_H_INCLUDED
#define RESULT_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

class Result
{
    // private
    vector<long int> multiplied_numbers;
    long int temp_smallest_current_number;
    vector<long int> final_result;

public:
    long int result(int nums);
    
};

#endif // RESULT_H_INCLUDED