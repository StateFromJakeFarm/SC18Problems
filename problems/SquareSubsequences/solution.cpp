#include <iostream>
#include <vector>
#include <string>

using namespace std;

long all_subseqs(const string &S_lower, const string &S_upper) {
    int len_lower = S_lower.length();
    int len_upper = S_upper.length();

    vector< vector<long> > N(len_lower+1);
    for (auto &r : N)
        r.resize(len_upper+1);

    int i, j;
    for (j=0; j<len_upper; j++) {
        if (S_upper[j] == S_lower[0])
            N[1][j+1] = 1;
        if (j)
            N[1][j+1] += N[1][j];
    }

    for (i=1; i<len_lower; i++) {
        for (j=0; j<len_upper; j++) {
            N[i+1][j+1] = N[i+1][j] + N[i][j+1] - N[i][j];

            if (S_lower[i] == S_upper[j])
                N[i+1][j+1] += N[i][j];

            N[i+1][j+1] %= 1000000007;
            if (N[i+1][j+1] < 0)
                N[i+1][j+1] += 1000000007;
        }
    }

    return N[len_lower][len_upper];
}

int main() {
    int T;
    cin >> T;

    for (int t=0; t<T; t++) {
        string S;
        cin >> S;

        long total = 0;
        for (int i=1; i<S.length(); i++) {
            string S_lower = S.substr(0, i);
            string S_upper = S.substr(i, (S.length() - i));

            total += all_subseqs(S_upper, S_lower);
            total %= 1000000007;
        }

        cout << total << endl;
    }

    return 0;
}
