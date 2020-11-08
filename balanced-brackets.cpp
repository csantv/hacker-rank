#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> st;
    string ini = "({[";
    for (char ch: s) {
        if (ini.find(ch) != string::npos) {
            st.push(ch);
        } else {
            if (!st.empty()) {
                char prev = st.top();
                if ((ch == ')' && prev != '(') ||
                    (ch == '}' && prev != '{') ||
                    (ch == ']' && prev != '[')) return "NO";
                st.pop();
            } else {
                return "NO";
            }
        }
    }
    if (st.empty()) {
        return "YES";
    } else {
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
