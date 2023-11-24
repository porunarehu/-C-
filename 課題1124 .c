#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>


#define LEN 16
#define LEN_MIN 8


char* passset(char password[]){
printf("パスワードを入力\n");
scanf("%s",password);
return password;
}

bool checklength(char password[]){
const int length = strlen(password);
return LEN_MIN <= length && length <= LEN ;
}

bool checkkind(char password[]){
int countUpper = 0;
int countLower = 0;
int countDigit = 0;

for(; *password != '\0'; password++){
if(isdigit(*password))countDigit++;
if(islower(*password))countLower++;
if(isupper(*password))countUpper++;
}

return countDigit > 0 && countLower > 0 && countUpper > 0 ;
}
bool secondcheck(char password[]){
char password2[LEN];
printf("パスワードを再入力\n");
scanf("%s", password2);
return strcmp(password2, password) == 0 ;
}

int main(void){
char password[LEN];

passset(password);

if( !checklength(password) ){
printf("パスワードは、%dから%d文字\n", LEN_MIN, LEN);
printf("終了\n");
exit(1);
}

if( !checkkind(password) ){
printf("パスワードは、数字、小文字、大文字の三種類を全て使う\n");
printf("終了\n");
exit(1);
}

if( !secondcheck(password) ){
printf("パスワードが違う\n");
printf("終了\n");
exit(1);
}

printf("登録が完了");

return 0;
}
