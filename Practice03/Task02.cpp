#include "iostream"
#include "string"
using namespace std;

int countWords(const string str)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '.')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int count = countWords(str);
    cout << "Number of words in the entered string: " << count << endl;
    return 0;
}