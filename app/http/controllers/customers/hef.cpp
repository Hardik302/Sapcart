#include <bits/stdc++.h>
using namespace std;


void printSubStr(string str,int low,int high)
{
    for(int i=low;i<=high;++i)
    {
        cout<<str[i];
    }
}

int longestPlsSubstr(string str)
{




    int n=str.size();
    bool table[n][n];
    memset(table,0,sizeof(table));
    int maxLength=1;
     
    for(int i=0;i<n-1;++i)
    {
        table[i][i]=true;
       
        if(str[i]==str[i])
        {
table[i][i+1]=true;
start=i;
maxLength=2;
        }
    



    for(int i=0;i<n-k+1;++i)
    {
        int j=i+k-1;
        if(table[i+1][j-1] && str[i]==str[j])
        {
            table[i][j]=true;


        }
        if(k>maxLength)
        {
            start=i;
            maxLength=k
        }

    }
}
}
cout<<"longest palindrom substring is"<<printSubstr(str,start,start+maxLength-1);
return maxLength;
}





int main()
{
    string str="forgeeksskeegfor";
    cout<<"length is "<<longestPalSubstr(str);
    return 0;
}