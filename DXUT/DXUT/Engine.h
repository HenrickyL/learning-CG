#ifndef DXUT_ENGINE_H
#define DXUT_ENGINE_H

#include "App.h"
#include "Window.h"

class Engine{
private:
	static App* app;					// aplica��o a ser executada
	int Loop();							// la�o principal do motor

public:
	static Window* window;				// janela da aplica��o
	static Input* input;				// dispositivos de entrada da aplica��o

	Engine();							// construtor
	~Engine();							// destrutor

	int Start(App* application);		// inicia o execu��o da aplica��o

	// trata eventos do Windows
	static LRESULT CALLBACK EngineProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};
#endif