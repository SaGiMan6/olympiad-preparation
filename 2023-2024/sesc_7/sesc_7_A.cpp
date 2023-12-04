#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Request {
    int start;
    int end;
    int id;
};


bool compareRequests(Request r1, Request r2) {
    return r1.end < r2.end;
}

vector<int> selectRequests(vector<Request> requests) {
    vector<int> result;
    sort(requests.begin(), requests.end(), compareRequests);
    int lastEnd = 0;
    for (int i = 0; i < requests.size(); i++) {
        if (requests[i].start >= lastEnd) {
            result.push_back(requests[i].id);
            lastEnd = requests[i].end;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<Request> requests(n);
    for (int i = 0; i < n; i++) {
        cin >> requests[i].start >> requests[i].end;
        requests[i].id = i + 1;
    }

    vector<int> result = selectRequests(requests);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << "\n";
    return 0;
}