#include <iostream>

using namespace std;

int labirinto[5][5] = {
		{2, 0, 0, 0, 0},
		{0, 1, 0, 1, 0},
		{0, 1, 0, 1, 1},
		{0, 1, 0, 0, 0},
		{0, 0, 1, 0, 3}
};

int linha_jogador = 0;
int coluna_jogador = 0;

int velocidade = 1;

void renderiza_labirinto() {
	for (int linha = 0; linha < 5; linha++) {
		for (int coluna = 0; coluna < 5; coluna++) {
			switch (labirinto[linha][coluna]) {
			case 0:
				cout << ". ";
				break;
			case 1:
				cout << "# ";
				break;
			case 2:
				cout << "J ";
				break;
			default:
				cout << "S ";
				break;
			}
		}
		cout << endl;
	}
}

void apresenta_jogo() {
	system("clear");
	cout << "Bem-vindo ao jogo do labirinto" << endl;
	cout << "Use as teclas W A S D para se movimentar" << endl;
	renderiza_labirinto();
}

void pega_posicao_jogador() {
	for (int linha = 0; linha < 5; linha++) {
		for (int coluna = 0; coluna < 5; coluna++) {
			if (labirinto[linha][coluna] == 2) {
				linha_jogador = linha;
				coluna_jogador = coluna;
			}
		}
	}
}

void movimenta_player(char movimento) {
	bool parede = labirinto[linha_jogador - 1][coluna_jogador] == 1;
	bool movimento_valido;

	switch (movimento) {
	case 'W':
		movimento_valido = !parede && linha_jogador - velocidade >= 0;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador - 1][coluna_jogador] = 2; // proximo espaço definido como jogador
			linha_jogador--;
		}
		break;
	case 'S':
		movimento_valido = !parede && linha_jogador - velocidade < 5;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador + 1][coluna_jogador] = 2; // proximo espaço definido como jogador
			linha_jogador++;
		}
		break;
	case 'A':
		movimento_valido = !parede && coluna_jogador - velocidade >= 0;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador][coluna_jogador - 1] = 2; // proximo espaço definido como jogador
			coluna_jogador--;
		}
		break;
	case 'D':
		movimento_valido = !parede && coluna_jogador - velocidade < 5;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador][coluna_jogador + 1] = 2; // proximo espaço definido como jogador
			coluna_jogador++;
		}
		break;
	default:
		cout << "movimento inválido" << endl;
		break;
	}
}

int main() {
	
	pega_posicao_jogador();
	apresenta_jogo();
	
	bool running = true;
	char entrada;

	while (running) {
		cout << "Insira a tecla de movimento: ";
		cin >> entrada;
		movimenta_player(entrada);
		system("clear");
		renderiza_labirinto();
	}

	return 0;
}
