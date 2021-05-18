#include <iostream>
#include <list>

using namespace std;

int main()
{
    int cont = 0, cont2 = 0, casos = 0, casos2 = 0, nota = 0;
    double soma = 0, media = 0, media2 = 0;
    list<int> lista;
    list<int>::iterator it;
    cin >> casos;
    while (cont < casos){
        cin >> casos2;
        while (cont2 < casos2){
            cin >> nota;
            soma = soma + nota;
            lista.push_back(nota);
            cont2++;
        }
        media = soma / casos2;
        for(it = lista.begin(); it!=lista.end();it++){
            if (*it > media){
                media2++;
            }
		}
		media2 = (media2 / casos2) * 100;
		cout.precision(3);
		cout << fixed << media2 << "%" <<endl;
		lista.clear();
		soma = 0;
        media2 = 0;
        cont2 = 0;
        cont++;
    }
    return 0;
}
