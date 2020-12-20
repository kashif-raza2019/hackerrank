#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    /*
     So we will use stringstream to return time string and 
      stoi() function to convert string to int 
      that's why i added sstream and to set fill for "0"s in hour, min or sec
      i have added iomanip header with setw(2)
     */
     int hour=0, min=0, sec=0,i;
     stringstream time;
     string h, minu, seco;
     char m = s[8];
     
     for(i=0; i<=1; i++)
     {
         h += s[i];
     }
     for(i=3; i<=4; i++)
     {
         minu += s[i];
     }
     for(i=6; i<=7; i++)
     {
         seco += s[i];
     }
     hour = stoi(h);
     min  =stoi(minu);
     sec = stoi(seco);
     if(m == 'A')
     {
        if(hour == 12)
        {
            hour = 0;
               time<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw  (2)<<setfill('0')<<sec;
        }else{
            time<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw  (2)<<setfill('0')<<sec;
        }
     }else if(m == 'P')
     {
         if(hour == 12)
         {
             time<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec;
         }else{
         hour = hour + 12;
         time<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec;
         }
     }
     return time.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
