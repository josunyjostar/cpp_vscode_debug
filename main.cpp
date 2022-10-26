#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define TEST 1


int main()
{
    vector<int> msg {TEST, 2, 3};

    for (const int& word : msg)
    { 
        cout << word << endl;
    }
    
}