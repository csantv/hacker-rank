#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long total = 0;
    for (char ch: s) {
        if (ch == 'a') total++;
    }
    total *= n / s.size();
    for (int i = 0; i < n % s.size(); ++i) {
        if (s[i] == 'a') total++;
    }
    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    cout << result << "\n";

    fout.close();

    return 0;
}