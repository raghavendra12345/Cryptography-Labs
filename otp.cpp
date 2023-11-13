#include <bits/stdc++.h>
using namespace std;

string generateOTP(int len)
{

    string str="1234567890";

    int n=str.length();

    string OTP;

    for(int i=1;i<=len;i++)
    {
        OTP.push_back(str[rand()%n]);

    }

  return OTP;
    
}

int main()
{
    srand(time(NULL));  // for different values each time.

    int len=4;
    cout<<"Your OTP for transaction is:"<<generateOTP(len).c_str()<<endl;

  return 0;  
}