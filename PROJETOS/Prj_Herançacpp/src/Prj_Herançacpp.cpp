#include <iostream>
#include <string>

using namespace std;
//Classe base: Veiculo
class Veiculo {
private:
	std::string modelo;

protected:
	int ano;

public:
	Veiculo(const string &mod, int a):
		modelo(mod), ano(a) {
	}

	void exibirInformacoes(){
		cout << "Modelo: " << modelo << ", Ano: " << ano << endl;
	}
};

//Classe derivada: Carro (herda de veiculo)
class Carro: public Veiculo {
private:
	string marca;

public:
	Carro(const string &m, const string &mod, int a):
		Veiculo(mod, a), marca(m){
		}

	void exibirDetalhes(){
		cout << "Marca: " << marca << ", ";
	}
};

int main() {
	//Criando um objeto da classe Carro
	Carro meuCarro("Toyota", "Corolla", 2022);

	//Chamando o metodo para exibir detalhes do carro (que inclui informações do veiculo)
	meuCarro.exibirDetalhes();

	return 0;

}
