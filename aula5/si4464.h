#include "modem.h"

extern modem_struct si4464;

void si4464_inicializa();
void si4464_transmite(char *);
void si4464_start_recepcao();

char si4464_existe_mensagem();
char* si4464_recebe_mensagem();
