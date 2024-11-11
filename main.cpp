#include <iostream>

using namespace std;

void apresenta_jogo() {
	system("clear");
	cout << "Bem-vindo ao jogo do labirinto" << endl;
	cout << "Use as teclas W A S D para se movimentar" << endl;
}

void renderiza_labirinto(int labirinto[5][5]) {
	for (int m = 0; m < 5; m++) {
		for (int n = 0; n < 5; n++) {
			switch (labirinto[m][n]) {
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

void movimenta_player() {
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

	apresenta_jogo();
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
