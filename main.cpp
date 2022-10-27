#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define TEST 1


int main()
{
    vector<int> msg {TEST, 2, 3};
    string temp = "버전을 변경합니다 1차";

    for (const int& word : msg)
    { 
        cout << word << endl;
    }
    
}