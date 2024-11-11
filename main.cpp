#include <iostream>

using namespace std;

void apresenta_jogo() {
	system("clear");
	cout << "Bem-vindo ao jogo do labirinto" << endl;
	cout << "Use as teclas W A S D para se movimentar" << endl;
}

void renderiza_labirinto(int labirinto[5][5]) {
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

int proximo_bloco(int labirinto[5][5], char movimento) {
	switch (movimento) {
	case 'W':
		break;
	case 'S':
		break;
	case 'A':
		break;
	case 'D':
		break;
	default:
		break;
	}
}

void atualiza_mapa(int mapa_labirinto[5][5], int novo_mapa[5][5]) {
	
}

void pega_posicao_jogador(int labirinto[5][5], int& linha_jogador, int& coluna_jogador, int& posicao[2]) {
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

	if (movimento_valido(proximo_bloco(labirinto, movimento))) {
		switch (movimento) {
		case 'W':
			
			movimento_valido = labirinto[linha_jogador - 1][coluna_jogador] != 1 && linha_jogador - velocidade

			if (movimento_valido(labirinto[linha_jogador - 1][coluna_jogador])) {
				labirinto[linha_jogador][coluna_jogador] = 0; // espaço anterior fica vazio
				labirinto[linha_jogador - 1][coluna_jogador] = 2; // proximo espaço definido como jogador
				linha_jogador--;
			}
			
			/*
			posição do jogador ( linha - 1 )
			atualiza a matriz
			*/
			break;
		case 'S':
			break;
		case 'A':
			break;
		case 'D':
			break;
		default:
			cout << "movimento inválido" << endl;
			break;
		}
	} else {
		cout << "movimento inválido" << endl;
	}

	/*
	recebe uma entrada de movimento
	verifica se o player pode se mover ( não inclui vencer pq é fim de game loop )
	atualiza a array multidimensional
	*/
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
	
	int labirinto[5][5] = {
		{2, 0, 0, 0, 0},
		{0, 1, 0, 1, 0},
		{0, 1, 0, 1, 1},
		{0, 1, 0, 0, 0},
		{0, 0, 1, 0, 3}
	};

	int linha_jogador;
	int coluna_jogador;



	//apresenta_jogo();
	renderiza_labirinto(labirinto);
	

	/*
	apresenta labirinto
	espera movimento
	verifica se pode se mover
	verifica se chegou ao final
	renderiza novo labirinto
	*/

	return 0;
}
