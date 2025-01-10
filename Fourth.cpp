#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

// Function to evaluate the mathematical expression
int evaluateExpression(const string &expression) {
    stack<int> values;
    stack<char> operators;

    auto applyOperation = [](int a, int b, char op) -> int {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return b != 0 ? a / b : 0; // Avoid division by zero
            default: return 0;
        }
    };

    string::size_type i = 0; // Use string::size_type for compatibility
    while (i < expression.size()) {
        if (isdigit(expression[i])) {
            int value = 0;
            while (i < expression.size() && isdigit(expression[i])) {
                value = value * 10 + (expression[i] - '0');
                i++;
            }
            values.push(value);
        } else if (expression[i] == '(') {
            operators.push(expression[i]);
            i++;
        } else if (expression[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(applyOperation(a, b, op));
            }
            operators.pop();
            i++;
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            while (!operators.empty() && operators.top() != '(') {
                int b = values.top(); values.pop();
                int a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(applyOperation(a, b, op));
            }
            operators.push(expression[i]);
            i++;
        } else {
            i++;
        }
    }

    while (!operators.empty()) {
        int b = values.top(); values.pop();
        int a = values.top(); values.pop();
        char op = operators.top(); operators.pop();
        values.push(applyOperation(a, b, op));
    }

    return values.top();
}

int main() {
    int N;
    cin >> N;
    vector<string> matrix(3);
    for (int i = 0; i < 3; i++) {
        cin >> matrix[i];
    }

    // Map of seven-segment patterns for digits and operators
    map<string, char> segmentToChar = {
        {" _ | ||_|", '0'}, {"     |  |", '1'}, {" _  _||_ ", '2'}, {" _  _| _|", '3'},
        {"   |_|  |", '4'}, {" _ |_  _|", '5'}, {" _ |_ |_|", '6'}, {" _   |  |", '7'},
        {" _ |_||_|", '8'}, {" _ |_| _|", '9'}, {"   | | | ", '+'}, {"   |_|   ", '*'},
        {"   |  |  ", '-'}, {"   |_|_| ", '/'}, {" _ |_|_ ", '='}, {"   |  |  ", '('},
        {"   |  |  ", ')'}
    };

    string equation;
    for (int i = 0; i < N; i++) {
        string segment;
        for (int j = 0; j < 3; j++) {
            segment += matrix[j].substr(i * 3, 3);
        }
        if (segmentToChar.find(segment) != segmentToChar.end()) {
            equation += segmentToChar[segment];
        } else {
            equation += '?'; // Unknown character
        }
    }

    size_t equalPos = equation.find('=');
    string lhs = equation.substr(0, equalPos);
    string rhs = equation.substr(equalPos + 1);

    int rhsValue = evaluateExpression(rhs);
    int faultyIndex = -1;

    for (string::size_type i = 0; i < lhs.size(); i++) {
        if (lhs[i] == '?') continue; // Skip unknown characters
        char originalChar = lhs[i];

        for (const auto &pair : segmentToChar) {
            if (pair.second == lhs[i]) continue;
            lhs[i] = pair.second;

            if (evaluateExpression(lhs) == rhsValue) {
                faultyIndex = i;
                break;
            }
        }

        if (faultyIndex != -1) break;
        lhs[i] = originalChar; // Restore the original character
    }

    if (faultyIndex != -1) {
        cout << faultyIndex << endl;
    } else {
        cout << "Perfect" << endl;
    }

    return 0;
}

