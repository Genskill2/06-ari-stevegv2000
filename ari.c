#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>

string ari(string);
string ari(string s) {
int characters=0;
int words=0;
int sentences=0;
int ari;
char* gradelevel[14] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth grade", "College Student", "Professor"};
for(int i=0; i < strlen(s); i++) {
    if(isalnum(s[i])) {
        characters++;
    }
    else if(s[i]==' '){
        words++;
    }
    else if(s[i]=='.' || s[i]=='!' || s[i]=='?') {
        sentences++;
    }
ari = 4.71*((float)characters/words) + 0.5*((float)words/sentences) - 21.43;
}
//printf("%s\n", gradelevel[ari]);
return gradelevel[ari];
}
