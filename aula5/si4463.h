#include "modem.h"

extern modem_struct si4463;

void si4463_inicializa();
void si4463_transmite(char *);
void si4463_start_recepcao();

char si4463_existe_mensagem(); 
char* si4463_recebe_mensagem();
