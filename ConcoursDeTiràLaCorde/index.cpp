#include <iostream>
using namespace std;
int main()
{
    int nbrTour, s1, s2;

    cout << "enter le nombre de tour : \n";
    cin >> nbrTour;
    int sf1 = 0;
    int sf2 = 0;
    for (int i = 1; i <= nbrTour; i++)
    {
        cout << "tour  ==>" << i << endl;
        cout << "score equipe 1 tour: \n";
        cin >> s1;
        cout << "score equipe 2 :\n";
        cin >> s2;
        sf1 += s1;
        sf2 += s2;
    }
    if (sf1 > sf2)
    {
        cout << "L'équipe 1 a un avantage" << endl;
    }
    else
    {
        cout << "L'équipe 2 a un avantage" << endl;
    }
    cout << "Poids total pour l'équipe 1 :" << sf1 << endl;
    cout << "Poids total pour l'équipe 2 :" << sf2 << endl;
}
