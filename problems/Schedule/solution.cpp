#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int readtime() {
    int hr, min;
    cin >> hr;
    cin.get();
    cin >> min;
    return hr * 60 + min;
}

struct Event {
    int start, end;
    string name;
};

int main() {
    // Input
    int num_events, num_queries;
    cin >> num_events >> num_queries;

    vector<Event> events;

    for (int i = 0; i < num_events; ++i) {
        string event;
        int start = readtime();
        int end = readtime();
        cin.get();
        getline(cin, event);
        events.push_back({ start, end, event });
    }

    cout.fill('0');
    for (int j = 0; j < num_queries; ++j) {
        int time = readtime();
        cout << setw(2) << (time / 60) << ":" << setw(2) << (time % 60) << " ";
        const char* sep = "";
        for (auto& event : events) {
            if (event.start <= time && time <= event.end) {
                cout << sep << event.name;
                sep = ", ";
            }
        }
        if (!*sep) {
            cout << "Nothing";
        }
        cout << endl;
    }
}

