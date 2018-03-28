#include <stdio.h>
#include <si4463.h>

int main(int argc, char ** argv) {
	si4463_inicializa();
	si4463_transmite("Mensagem");
	si4463_start_recepcao();

	while (1) {
		if (si4463_existe_mensagem()) {
			printf(si4463_recebe_mensagem());
			si4463_start_recepcao();
		}
	}
	return 0;
}