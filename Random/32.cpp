#include<iostream>
using namespace std;
// using a sentence, count the number of alphabets,digits and 
// spaces in the sentence


int main(){
    char ch;
    ch = cin.get();
    int alpha = 0;
    int space = 0;
    int digit = 0;
    while(ch!='\n'){
        if((ch>='0') and (ch<='9')){
            digit++;
        }
        else if(((ch>='a') and (ch<='z')) or ((ch>='A')and (ch<='z'))){
            alpha++;
        }
        else if((ch==' ') or (ch=='\t')){
            space++;
        }

        ch = cin.get();
    }
    cout << "Alphabets are " << alpha << endl;
    cout << "Digits are " << digit << endl;
    cout << "Spaces are " << space << endl;

    return 0;
}