#include<stdio.h>
#include<string.h>
//Codechef problem 16
int check(char *st,int i,int *pair){
    int c;
    for(i;st[i]!='\0';i+=2){
        if(st[i+2]=='>'){
            *pair+=1;
            c=i;
        }
        else break;
    }
    return c;
}
//Making an edit to check in feature1 branch
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int pair=0;
        char st[100001];
        scanf("%s",st);
        for(int i=0;i<strlen(st);i++){
            if(st[i]=='>'){
                i=check(st,i,&pair);
            }
        }
        printf("%d\n",pair);
        printf("This is the main branch\n");
    }
    return 0;
}