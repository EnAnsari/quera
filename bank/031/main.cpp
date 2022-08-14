/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3430/
*/

#include <iostream>

using namespace std;إ

int main()
{
    string str;
    cin>>str;
    for(int i=0 ; i<=str.length()-1;i++){
        for(int j = 0; j <=i ; j++){
            while(j<i){
                str[j]=str[i];
                break;
            }
        }if(i<str.length()){cout<<str<<endl;}
        else
            cout<<str;
    }

}