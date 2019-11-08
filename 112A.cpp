#include <iostream>
#include <cstring>
using namespace std;
const  int max1=10000;
int main()
{
    char str1[max1];
    char str2[max1];
    cin >> str1;
    cin >> str2;
    int sum = 0;
    for(int i=0;i<sizeof(str1);i++)
    {
        /*if('A'<=str1[i]<='Z')
        {
            str1[i]-32
        }*/
        if(str1[i]>str2[i])
        {
            sum++;
        }
        else
        {
            sum--;
            /* code */
        }
    }
    if(sum>0)
    {
        cout<<'1'<<endl;
    }
    else if (sum==0)
    {
        cout<<'0'<<endl;
    }
    else
    {
        cout<<'-1'<<endl;
    }  
    return 0;
}