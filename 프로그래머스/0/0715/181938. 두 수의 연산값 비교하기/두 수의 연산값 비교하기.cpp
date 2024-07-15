#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str1 = to_string(a) + to_string(b);
    int int1 = 2 * a * b;
    
    if (stoi(str1) >= int1)
    {
        answer = stoi(str1);
    }
    else
    {
        answer = int1;
    }
    
    return answer;
}