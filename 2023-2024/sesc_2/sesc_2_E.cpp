//#include <iostream>
//#include <queue>
//#include <deque>
//#include <utility>
//
//#define pr_queue pair<queue<long long>, deque<long long>>
//
//using namespace std;
//
//
//int main() {
    // ios::sync_with_stdio(false);

//    long long n, k;
//    pr_queue que;
//    queue<long long> result;
//
//    cin >> n >> k;
//
//
//    for (long long i = 0; i < k; i++) {
//        int temp_in;
//        std::cin >> temp_in;
//
//        que.first.push(temp_in);
//        if (que.second.empty()) {
//            que.second.push_back(temp_in);
//        } else {
//            while (not que.second.empty()) {
//                if (que.second.back() > temp_in) {
//                    que.second.pop_back();
//                } else {
//                    break;
//                }
//            }
//            que.second.push_back(temp_in);
//        }
//    }
//    result.push(que.second.front());
//
//    for (long long _ = 0; _ < (n - k); _++) {
//        long long temp_in;
//        cin >> temp_in;
//
//        if (que.first.front() == que.second.front()) {
//            que.second.pop_front();
//        }
//        que.first.pop();
//
//        que.first.push(temp_in);
//        if (que.second.empty()) {
//            que.second.push_back(temp_in);
//        } else {
//            while (not que.second.empty()) {
//                if (que.second.back() > temp_in) {
//                    que.second.pop_back();
//                } else {
//                    break;
//                }
//            }
//            que.second.push_back(temp_in);
//        }
//
//        result.push(que.second.front());
//    }
//
//    size_t res_size = result.size();
//
//    for (long long _ = 0; _ < res_size; _++) {
//        cout << result.front() << "\n";
//        result.pop();
//    }
//}

#include <iostream>
#include <deque>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> nums[i];
    }

    std::deque<int> dq;

    for (int i = 0; i < N; ++i) {
        int num = nums[i];

        if (!dq.empty() && dq.front() <= i - K) {
            dq.pop_front();
        }

        while (!dq.empty() && num <= nums[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= K - 1) {
            std::cout << nums[dq.front()] << " ";
        }
    }

    return 0;
}