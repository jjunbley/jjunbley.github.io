#include <string>
#include <vector>
#include<unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int test[3000];
    unordered_map<string, int> a;
    a.insert({ "abc", 1 });
    a.insert({ "abc", 2 });
    
    for (int i = 0; i < participant.size(); i++) {
        a[participant[i]]++;
    }
    for (int i = 0; i < completion.size(); i++) {
        a[completion[i]]--;
    }
    
    for (int i = 0; i < participant.size(); i++)
    {
        if (a[participant[i]] == 1) {
            answer = participant[i];
        }
    }

    return answer;
}
int main() {
    vector<string> pt;
    vector<string> cmt;
    pt = { "mislav", "stanko", "mislav", "ana" };
    cmt = {"mislav", "stanko", "mislav" };
    solution(pt, cmt);


    return 0;
}