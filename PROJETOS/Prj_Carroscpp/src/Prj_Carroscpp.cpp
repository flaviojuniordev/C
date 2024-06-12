#include <iostream>
#include <string>

using namespace std;

//Definição da classe Carro
class Carro{
public:
	//Membros da classe
	string marca;
	string modelo;
	int ano;

	//Construtor
	Carro(const string &m, const string &mod, int a):
		marca(m), modelo(mod), ano(a) {
	}

	//Construtor para criar um carro vazio
	Carro(): marca(""), modelo(""), ano(0){

	}

	//Metodo para exibir informações sobre o carro
	void exibirInformacoes(){
		cout << "Marca: " << marca << ", Modelo: " << modelo <<  ", Ano: " << ano << endl;
	}
};

int main() {
	//Criando um objeto da classe Carro
	Carro meuCarro;

	//Criando um objeto da classe Carro usando o construtor
	//Carro meuCarro ("Toyota", "Corolla", 20220;

	//Atribuindo valores aos membros da classe
	meuCarro.marca = "Toyota";
	meuCarro.modelo = "Corolla";
	meuCarro.ano = 2022;

	meuCarro.exibirInformacoes();

	return 0;

}
