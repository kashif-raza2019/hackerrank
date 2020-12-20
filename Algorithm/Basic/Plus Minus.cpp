#include <bits/stdc++.h>
#include <iomanip>//Added for setprecision() function
using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
 double rPlus, rMinus, rZero;
 int countPlus, countMinus, countZero, i;
 countPlus = countMinus = countZero =0;
 int size = arr.size();
    for(i=0; i<size; i++)
    {
        if(arr[i]>0){
            countPlus++;
        }else if(arr[i] == 0)
        {
            countZero++;
        }else if(arr[i]<0){
            countMinus++;
        }
    }
  rPlus  =countPlus/(1.0*arr.size());
  rMinus  =countMinus/(1.0*arr.size());
  rZero  =countZero/(1.0*arr.size());
 cout<<fixed<<rPlus<<setprecision(6)<<endl;
 cout<<fixed<<rMinus<<setprecision(6)<<endl;
 cout<<fixed<<rZero<<setprecision(6)<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
