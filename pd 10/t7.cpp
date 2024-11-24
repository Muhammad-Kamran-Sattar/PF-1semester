#include <iostream>

using namespace std;

void reverseWords(char* str) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    int start = 0;
    for (int end = 0; end <= n; end++)
     {
        if (str[end] == ' ' || str[end] == '\0') 
        {
            for (int i = start, j = end - 1; i < j; i++, j--)
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            start = end + 1;
        }
    }
}

int main() {
    const int MAX_SIZE = 1000;
    char input[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(input, MAX_SIZE);

    reverseWords(input);

    cout << "Reversed string: " << input << endl;

    return 0;
}