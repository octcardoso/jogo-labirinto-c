#include <iostream>

using namespace std;

int labirinto[5][5] = {
		{2, 0, 0, 0, 0},
		{0, 1, 0, 1, 0},
		{0, 1, 0, 1, 1},
		{0, 1, 0, 0, 0},
		{0, 0, 1, 0, 3}
};

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
}

void pega_posicao_jogador(int labirinto[5][5], int& linha_jogador, int& coluna_jogador) {
	for (int linha = 0; linha < 5; linha++) {
		for (int coluna = 0; coluna < 5; coluna++) {
			if (labirinto[linha][coluna] == 2) {
				linha_jogador = linha;
				coluna_jogador = coluna;
			}
		}
	}
}

void movimenta_player(int labirinto[5][5], char movimento, int& linha_jogador, int& coluna_jogador) {
	bool parede = labirinto[linha_jogador - 1][coluna_jogador] == 1;

	switch (movimento) {
	case 'W':
		bool movimento_valido = !parede && linha_jogador - velocidade >= 0;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador - 1][coluna_jogador] = 2; // proximo espaço definido como jogador
			linha_jogador--;
		}
		break;
	case 'S':
		bool movimento_valido = !parede && linha_jogador - velocidade < 5;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador + 1][coluna_jogador] = 2; // proximo espaço definido como jogador
			linha_jogador++;
		}
		break;
	case 'A':
		bool movimento_valido = !parede && coluna_jogador - velocidade >= 0;

		if (movimento_valido) {
			labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
			labirinto[linha_jogador][coluna_jogador - 1] = 2; // proximo espaço definido como jogador
			coluna_jogador--;
		}
		break;
	case 'D':
		bool movimento_valido = !parede && coluna_jogador - velocidade < 5;

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

void game_loop() {
	bool running = true;
	while (running) {
		// limpa terminal
		// renderiza labirinto
		// movimenta
	}
}

int main() {
	
	

	int linha_jogador;
	int coluna_jogador;



	//apresenta_jogo();
	renderiza_labirinto();
	

	/*
	apresenta labirinto
	espera movimento
	verifica se pode se mover
	verifica se chegou ao final
	renderiza novo labirinto
	*/

	return 0;
}
