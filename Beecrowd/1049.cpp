#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define ppb pop_back
using ll = long long;

int main() {
    _
    string n, n1, n2; cin >> n;
    cin >> n1;
    cin >> n2;
    if(n == "vertebrado"){
        if(n1 == "ave"){
            if(n2 == "carnivoro")cout << "aguia" << endl;
            if(n2 == "onivoro")cout << "pomba" << endl;
        }
        if(n1 == "mamifero"){
            if(n2 == "herbivoro")cout << "vaca" << endl;
            if(n2 == "onivoro")cout << "homem" << endl;
        }
    } 
    if(n == "invertebrado"){
        if(n1 == "inseto"){
            if(n2 == "hematofago")cout << "pulga" << endl;
            if(n2 == "herbivoro")cout << "lagarta" << endl;
        }
        if(n1 == "anelideo"){
            if(n2 == "hematofago")cout << "sanguessuga" << endl;
            if(n2 == "onivoro")cout << "minhoca" << endl;
        }
    }  
    return 0;
}