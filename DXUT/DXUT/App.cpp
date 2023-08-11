#include "App.h"
#include "Engine.h"
// -------------------------------------------------------------------------------
// Inicializa��o de membros est�ticos da classe

Window* App::window = nullptr;		// ponteiro para a janela
Input* App::input = nullptr;		// ponteiro para a entrada

// -------------------------------------------------------------------------------
App::App()
{
	if (!window)
	{
		// ATEN��O: assume que a inst�ncia da engine �  
		// criada antes da inst�ncia da aplica��o
		window = Engine::window;
		input = Engine::input;
	}
}

// -------------------------------------------------------------------------------

App::~App()
{
}

// --