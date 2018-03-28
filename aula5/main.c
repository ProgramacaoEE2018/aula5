#include <stdio.h>
#include "si4463.h"
#include "si4464.h"

//#define SI4464

#ifdef  SI4464
#define modem_inicializa			si4464_inicializa
#define modem_transmite				si4464_transmite
#define modem_start_recepcao		si4464_start_recepcao
#define modem_existe_mensagem		si4464_existe_mensagem
#define modem_recebe_mensagem		si4464_recebe_mensagem
#else
#define modem_inicializa			si4463_inicializa
#define modem_transmite				si4463_transmite
#define modem_start_recepcao		si4463_start_recepcao
#define modem_existe_mensagem		si4463_existe_mensagem
#define modem_recebe_mensagem		si4463_recebe_mensagem
#endif //  SI4464

int main(int argc, char ** argv) {
	modem_inicializa();
	modem_transmite("Mensagem");
	modem_start_recepcao();

	while (1) {
		if (modem_existe_mensagem()) {
			printf(modem_recebe_mensagem());
			modem_start_recepcao();
		}
	}
	return 0;
}