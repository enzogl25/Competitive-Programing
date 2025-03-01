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
    double n1,n2,n3,n4; cin >> n1 >> n2 >> n3 >> n4;
    double mean = ((n1*2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    cout << fixed << setprecision(1) << "Media: " << mean << endl;   
    if (mean >= 7.0)cout << "Aluno aprovado." << endl;
    else if(mean < 5.0)cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        double exam; cin >> exam;
        cout << fixed << setprecision(1) << "Nota do exame: " << exam << endl;
        double new_mean = (mean + exam)/2;
        if (new_mean >= 5.0)cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        cout << fixed << setprecision(1) << "Media final: " << new_mean << endl;
    }
    return 0;
}