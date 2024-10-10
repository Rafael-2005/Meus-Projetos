#include <iostream>
#include <vector>
#include <algorithm>

class Paciente {
public:
    std::string nome;
    int urgencia; // Grau de urgência: 1 (Baixa) a 5 (Alta)

    Paciente(std::string n, int u) : nome(n), urgencia(u) {}

    // Método para exibir informações do paciente
    void exibirInformacoes() const {
        std::cout << "Nome: " << nome << ", Urgência: " << urgencia << std::endl;
    }
};

// Função de comparação para ordenar pacientes pela urgência
bool compararUrgencia(const Paciente& p1, const Paciente& p2) {
    return p1.urgencia > p2.urgencia; // Ordena em ordem decrescente
}

int main() {
    std::vector<Paciente> chamadas;

    // Adicionando pacientes
    chamadas.emplace_back("João", 3);
    chamadas.emplace_back("Maria", 5);
    chamadas.emplace_back("Carlos", 2);
    chamadas.emplace_back("Ana", 4);

    // Ordenando as chamadas pela urgência
    std::sort(chamadas.begin(), chamadas.end(), compararUrgencia);

    // Exibindo as chamadas ordenadas
    std::cout << "Chamadas do hospital por grau de urgência:" << std::endl;
    for (const auto& paciente : chamadas) {
        paciente.exibirInformacoes();
    }

    return 0;
}
