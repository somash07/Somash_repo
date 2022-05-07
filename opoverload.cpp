#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class stringcomp{
    char *str;
    int l;
    public: 
        stringcomp(){
            str= new char;
            strcpy(str," ");
        }
        stringcomp(char *s){
            l=strlen(s);
            str=new char(l+1);
            strcpy(str,s);
        }
        void displaydata(){
            cout<<"the string  is : "<<str<<endl;
        }
        friend stringcomp operator ==(stringcomp,stringcomp);
        
};
stringcomp operator ==(stringcomp o1,stringcomp o2){
    if(strcmp(o1.str,o2.str)==0){
        cout<<"same striing"<<endl;
    }
    else{
        cout<<"not same string";
    }

}
int main(){
    stringcomp o1("madam"),o2("madam");
    o1.displaydata();
    o2.displaydata();
    o1==o2;
}
