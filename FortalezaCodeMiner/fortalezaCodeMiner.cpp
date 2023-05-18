#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(vector<int>& array, int inicio, int fim) {
  int pivo = array[(inicio + fim) / 2]; // Escolhe o elemento do meio como pivô

  int i = inicio;
  int j = fim;

  while (i <= j) {
    while (array[i] < pivo) {
      i++;
    }
    while (array[j] > pivo) {
      j--;
    }
    if (i <= j) {
      trocar(&array[i], &array[j]);
      i++;
      j--;
    }
  }

  if (inicio < j)
    quickSort(array, inicio, j);
  if (i < fim)
    quickSort(array, i, fim);
}

class FortalezaCodeMiner {
public:
  FortalezaCodeMiner(const vector<int>& equipamentos) : equipamentos_(equipamentos) {}

  bool possui_equipamento(int equipamento) {
    // TODO: Implementar um algoritmo de busca eficiente para encontrar o equipamento.
    for (int equip : equipamentos_) {
      if (equip == equipamento) {
        return true;
      }
    }
    return false;
  }

private:
  vector<int> equipamentos_;
};

class Overfitting {
public:
  Overfitting(const vector<int>& pontos_fracos) : pontos_fracos_(pontos_fracos) {}

  const vector<int>& pontos_fracos() const {
    return pontos_fracos_;
  }

private:
  vector<int> pontos_fracos_;
};

int main() {
 vector<int> pontos_fracos_chefao;
  vector<int> equipamentos_fortaleza;
string line;
  getline(cin, line);
  istringstream iss(line);
  int ponto_fraco;
  while (iss >> ponto_fraco) {
    pontos_fracos_chefao.push_back(ponto_fraco);
  }

  getline(cin, line);
  iss.str(line);
  iss.clear();
  int equipamento;
  while (iss >> equipamento) {
    equipamentos_fortaleza.push_back(equipamento);
  }

  
  // Imprimir o array equipamentos_fortaleza
  cout << "Equipamentos da Fortaleza: ";
  for (int equipamento : equipamentos_fortaleza) {
    cout << equipamento << " ";
  }
  cout << endl;
// Cria objetos dos tipos Overfitting e FortalezaCodeMiner
  Overfitting chefao(pontos_fracos_chefao);
  FortalezaCodeMiner fortaleza(equipamentos_fortaleza);
  // Verifica se todos os pontos fracos do Chefão possuem equipamentos na Fortaleza
  bool vitoria = true;
  for (int ponto_fraco : chefao.pontos_fracos()) {
    if (!fortaleza.possui_equipamento(ponto_fraco)) {
      vitoria = false;
      break;
    }
  }

// Imprimir resultado da batalha
  cout << (vitoria ? "Vencemos!" : "Perdemos!") << endl;

  return 0;
}
