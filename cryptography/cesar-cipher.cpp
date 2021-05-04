/*
    Author : KaiserSakhi
    Date : 29-03-2021
    Environment : WSL KaliLinux

*/



#include<iostream>
#include<cstdio>
#include<cstring>

void sToLower(char *s, int len){
    for (int i = 0; i < len; ++i){
        s[i] = tolower(s[i]);
    }
}

// this fucntion will find the cipher txt of sigle char at pos from s
//@prams : txt, position_from_txt, key , to_encrpt_or_decrpt
void modIt(char* s, int pos, int key, bool en){
    int letter = s[pos] - 97;
    if (en)
        letter = (letter + key) % 26;
    else
        letter = (letter - key) % 26;
    letter = letter + 97;
    s[pos] = (char) letter;
}

char *encrpt(char *s, unsigned int key){
    int len = strlen(s);
    char *newString = new char[len];
    strcpy(newString, s);
    sToLower(newString,len);
    newString[len] = '\0';
    int i = 0;
    for (; i < len; ++i){
        if(newString[i] >= 'a' && newString[i] <= 'z' ){
            modIt(newString, i, key, true);
        }else if(newString[i] == 32){
            newString[i] = 38;
        }
    }
    return newString;
}

char *decrpt(char *s, unsigned int key){
    int len = strlen(s);
    char *newString = new char[len];
    strcpy(newString, s);
    sToLower(newString,len);
    newString[len] = '\0';
    int i = 0;
    for (; i < len; ++i){
        if(newString[i] >= 'a' && newString[i] <= 'z' ){
            modIt(newString, i, key, false);
        }else if(newString[i] == 38){
            newString[i] = 32;
        }
    }
    return newString;
}


int main(){
    char s[]= "Kaiser Sakhi";
    printf("%s \n", encrpt(s,4));
    printf("%s \n", decrpt(encrpt(s,4), 4));
    return 0;
}