#ifndef DXUT_APP_H
#define DXUT_APP_H

#include "Window.h"
#include "Input.h"

class App {
protected:
	static Window* window;						// janela
	static Input* input;						// entrada
public:
	App();										// construtor
	virtual ~App();								// destrutor

	// Estes m�todos s�o puramente virtuais, isto �, devem ser 
		// implementados em todas as classes derivas de App.

	virtual void Init() = 0;					// inicializa��o
	virtual void Update() = 0;					// atualiza��o
	virtual void Finalize() = 0;				// finaliza��o	

	// Estes m�todos possuem uma implementa��o vazia por padr�o
	// e apenas um deles deve ser sobrescrito na classe derivada:
	// - Draw � executado a cada ciclo do la�o principal
	// - Display � chamado apenas uma vez no in�cio da aplica��o
	//   e deve ser chamado manualmente em Update toda vez
	//   que a tela precisar ser redesenhada.

	virtual void Draw() {}						// desenho
	virtual void Display() {}					// exibi��o
	virtual void OnPause() { Sleep(10); }		// em pausa
};
#endif