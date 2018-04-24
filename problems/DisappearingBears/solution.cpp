#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <deque>
#include <set>

using namespace std;

struct Node {
    int bears;
    map<int, int> edges;

    Node() : bears(0), edges() {}
};

// bears saved
int save_bears(const vector<Node>& nodes, int start, int crisis_duration) {
    // (bears saved, path cost, target, visited)
    deque<tuple<int, int, int, set<int>>> search;
    search.push_back(make_tuple(0, 0, start, set<int>()));

    int max_bears = 0;
    while (!search.empty()) {
        int saved, time, node;
        set<int> visited;
        tie(saved, time, node, visited) = search.front();
        search.pop_front();

        visited.insert(node);
        saved += max(0, nodes[node].bears - time);
        max_bears = max(max_bears, saved);
        //cout << saved << "," << time << "," << node << "/" << endl;

        for (auto each : nodes[node].edges) {
            int dest, cost;
            tie(dest, cost) = each;

            if (time + cost > crisis_duration) continue;
            if (visited.find(dest) != visited.end()) continue;
            search.push_back(make_tuple(saved, time + cost, dest, visited));
        }
    }

    return max_bears;
}

int main() {
    // Input
    int num_nodes, num_edges;
    cin >> num_nodes >> num_edges;

    int crisis_duration = 0;
    int all_bears = 0;
    vector<Node> nodes(num_nodes);
    for (auto& node : nodes) {
        cin >> node.bears;
        crisis_duration = max(crisis_duration, node.bears);
        all_bears += node.bears;
    }

    for (int i = 0; i < num_edges; ++i) {
        int a, b, weight;
        cin >> a >> b >> weight;
        nodes[a-1].edges[b-1] = weight;
        nodes[b-1].edges[a-1] = weight;
    }

    // Search
    int best = 0, best_val = save_bears(nodes, 0, crisis_duration);
    for (int start = 1; start < num_nodes; ++start) {
        int val = save_bears(nodes, start, crisis_duration);
        if (val > best_val) {
            best = start;
            best_val = val;
        }
    }

    // Output
    cout << (best + 1) << " " << best_val << " " << (all_bears - best_val) << endl;
}

