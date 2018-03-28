#include <stdio.h>
#include "si4463.h"
#include "si4464.h"
#include "modem.h"

//#define SI4464


int main(int argc, char ** argv) {
	modem_struct modem=si4463;

	modem.inicializa();
	modem.transmite("Mensagem");
	modem.start_recepcao();

	while (1) {
		if (modem.existe_mensagem()) {
			printf(modem.recebe_mensagem());
			modem.start_recepcao();
		}
	}
	return 0;
}