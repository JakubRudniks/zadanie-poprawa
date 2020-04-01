#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct filmy
{
string film;
string tytul;
string rezyser;
int premiera;
string gatunek;
int czas_trwania_w_minutach;
};
int main() {
{
filmy t[5];
for(int i=0;i<5;i++)
{
t[i].film="Fajny";
t[i].tytul="Joker";
t[i].rezyser="Todd Phillips";
t[i].premiera=2019;
t[i].gatunek="Dramat/Krymina³";
t[i].czas_trwania_w_minutach =122;
}
for (int i=0; i<5;i++)
{
cout<< t[i].film<<endl;
cout << t[i].tytul<<endl;
cout<<t[i].rezyser<<endl;
cout << t[i].premiera<<endl;
cout << t[i].gatunek<<endl;
cout<<t[i].czas_trwania_w_minutach<<endl;
}
}
    return 0;
}
