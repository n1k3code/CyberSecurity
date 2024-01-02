#include <stdio.h>
#include <Windows.h>

void desafio_01();

int main() {
	desafio_01();
	return 0;
}

void desafio_01() {
	LPCSTR mensagem = L"Cyber Security 2024 by: N1k3Code";
	LPCSTR titulo = L"Desafio 01";
	MessageBox(0, mensagem, titulo, MB_OK);
}
