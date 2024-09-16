// There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

// You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

// Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.

#include <iostream>
#include <vector>
using namespace std;

int solution(const vector<int>& gas, const vector<int>& cost) {
    int total_gas = 0;
    int current_gas = 0;
    int start_station = 0;

    for (int i = 0; i < gas.size(); i++) {
        total_gas += gas[i] - cost[i];
        current_gas += gas[i] - cost[i];

        if (current_gas < 0) {
            start_station = i + 1;
            current_gas = 0;
        }
    }

    return total_gas >= 0 ? start_station : -1;
}

int main() {
    vector<int> gas;
    vector<int> cost;
    int n;

    cin >> n;
    gas.resize(n);
    cost.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> gas[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    int ans = solution(gas, cost);
    cout << ans << endl;

    return 0;
}
