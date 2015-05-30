#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct club{
	string nome;
	int pts;
	int jogos;
	int posicao;
	int gols_pro;
	int gols_contra;
	int gols_saldo;

	club(string s){
		nome = s;
		pts = 0;
		jogos = 0;
		posicao = 0;
		gols_pro = 0;
		gols_contra = 0;
		gols_saldo = 0;
	}

	bool operator == (const struct club &a){
		return this->pts == a.pts && this->gols_saldo == a.gols_saldo && this->gols_pro == a.gols_pro;
	}
};

string lower(string s){
	for (int i = 0; i < s.size(); ++i)
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 'a' - 'A';
	
	return s;
}

bool mySort(club a, club b){
	if(a.pts != b.pts)
		return a.pts < b.pts;

	if(a.gols_saldo != b.gols_saldo)
		return a.gols_saldo < b.gols_saldo;

	if(a.gols_pro != b.gols_pro)
		return a.gols_pro < b.gols_pro;

	return lower(a.nome) > lower(b.nome);
}


int main(){
	int t, p;

	while(cin >> t >> p, t+p){
		vector<club> clubs;
		map<string, int> pos;
		string nome;
		for (int i = 0; i < t; ++i){
			cin >> nome;
			pos[nome] = i;
			club c(nome);
			clubs.push_back(c);
		}

		for (int i = 0; i < p; ++i){
			char c;
			int g1, g2;
			string t1, t2;
			cin >> t1 >> g1 >> c >> g2 >> t2;

			clubs[pos[t1]].jogos++;
			clubs[pos[t1]].gols_pro += g1;
			clubs[pos[t1]].gols_contra += g2;
			
			clubs[pos[t2]].jogos++;
			clubs[pos[t2]].gols_pro += g2;
			clubs[pos[t2]].gols_contra += g1;

			if(g1 == g2){
				clubs[pos[t1]].pts++;
				clubs[pos[t2]].pts++;
			} else{
				if(g1 > g2)
					clubs[pos[t1]].pts += 3;
				else
					clubs[pos[t2]].pts += 3;
			}
		}

		for (int i = 0; i < t; ++i)
			clubs[i].gols_saldo = clubs[i].gols_pro - clubs[i].gols_contra;
		
		sort(clubs.rbegin(), clubs.rend(), mySort);

		for (int i = 0; i < t; ++i){
			if(i != 0 && clubs[i] == clubs[i-1])
				cout << "   ";
			else
				cout << setw(2)  << i+1 << ".";
			cout << setw(16) << clubs[i].nome;
			cout << setw(4)  << clubs[i].pts;
			cout << setw(4)  << clubs[i].jogos;
			cout << setw(4)  << clubs[i].gols_pro;
			cout << setw(4)  << clubs[i].gols_contra;
			cout << setw(4)  << clubs[i].gols_saldo;

			if(clubs[i].jogos)
				cout << setw(7) << fixed << setprecision(2) << 100.0 * clubs[i].pts / (3 * clubs[i].jogos);
			else
				cout << "    N/A";

			cout << endl;
		}

		cout << endl;
	}
}