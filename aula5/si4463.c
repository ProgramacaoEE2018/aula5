#include "si4463.h"

void si4463_inicializa() {

}
void si4463_transmite(char *mensagem) {
}
void si4463_start_recepcao() {
}

char si4463_existe_mensagem() {
	return 1;
}
char* si4463_recebe_mensagem() {
	return "Mensagem SI4463\n";

}

modem_struct si4463={
	si4463_inicializa,
	si4463_transmite,
	si4463_start_recepcao,
	si4463_existe_mensagem,
	si4463_recebe_mensagem
};