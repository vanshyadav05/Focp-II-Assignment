#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

class Bank {
private:
    unordered_map<int, int> balance;

public:
    bool CREATE(int userId, int amount) {
        if (balance.count(userId)) {
            balance[userId] += amount;
            return false;
        }

        balance[userId] = amount;
        return true;
    }

    bool DEBIT(int userId, int amount) {
        if (!balance.count(userId) || balance[userId] < amount)
            return false;

        balance[userId] -= amount;
        return true;
    }

    bool CREDIT(int userId, int amount) {
        if (!balance.count(userId))
            return false;

        balance[userId] += amount;
        return true;
    }

    int BALANCE(int userId) {
        if (!balance.count(userId))
            return -1;

        return balance[userId];
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    Bank bank;

    while (Q--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string query;
        ss >> query;

        if (query == "CREATE") {
            int x, y;
            ss >> x >> y;
            cout << (bank.CREATE(x, y) ? "true" : "false") << endl;
        }
        else if (query == "DEBIT") {
            int x, y;
            ss >> x >> y;
            cout << (bank.DEBIT(x, y) ? "true" : "false") << endl;
        }
        else if (query == "CREDIT") {
            int x, y;
            ss >> x >> y;
            cout << (bank.CREDIT(x, y) ? "true" : "false") << endl;
        }
        else if (query == "BALANCE") {
            int x;
            ss >> x;
            cout << bank.BALANCE(x) << endl;
        }
    }

    return 0;
}