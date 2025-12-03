 #include <iostream>
 #include <string>
 #include <stack>
 
 using namespace std;
 
 struct Carga {
 	
 	int id_caixa;
 	float peso_kg;
 	string destino;
 	
 };
 
 int main() {
 	
 	stack<string> pilhaCarga;
 	
 	Carga primeiraCarga = {501, 15.5, "Setor Leste"};
	Carga segundaCarga = {502, 22.0, "Setor Oeste"};
	Carga terceiraCarga = {503, 10.1, "Setor Norte"};
	
	cout << "== Sistema para gerenciar cargas";
	
	cout << pilhaCarga.empty();
	
	cout << "\n\n== Cargas \n";
	
	pilhaCarga.push("Primeira carga");
	
	cout << "[PUSH 1] Carga adicionada no armazem.\n";
	
	pilhaCarga.push("Segunda carga");
	
	cout << "[PUSH 2] Carga adicionada no armazem.\n";
	
	pilhaCarga.push("Terceira carga");
	
	cout << "[PUSH 3] Carga adicionada no armazem.\n";
	
 	cout << "\nPróxima caixa a ser despachada" << endl;

	cout << "\nTOPO DA PILHA: " << pilhaCarga.top() << endl;
	cout << "\nID: " << terceiraCarga.id_caixa << "||   Destino: " << terceiraCarga.destino;
 	
 	cout << "\nEntrega de caixas" << endl;
	
	cout << "\nTOPO DA PILHA: " << pilhaCarga.top() << endl;
 	
 	pilhaCarga.pop();
 	
 	cout << "Caixa [ID] " << terceiraCarga.id_caixa << " removida para o processamento";
 	
 	cout << "\nTOPO DA PILHA: " << pilhaCarga.top() << endl;
 	
 	pilhaCarga.pop();
 	
 	cout << "Caixa [ID] " << segundaCarga.id_caixa << " removida para o processamento";
 	
 	cout << "\nNova caixa no topo: " << pilhaCarga.top();
 	cout << "\nTamanho atual da pilha: " << pilhaCarga.size();
	
 	
}
