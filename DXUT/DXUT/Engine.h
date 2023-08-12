#ifndef DXUT_ENGINE_H
#define DXUT_ENGINE_H

#include "App.h"
#include "Window.h"
#include "Timer.h"

class Engine{
private:
	static App* app;					// aplicação a ser executada
	static Timer timer;					// medidor de tempo
	float FrameTime();					// calcula o tempo do quadro
	int Loop();							// laço principal do motor

public:
	static Window* window;				// janela da aplicação
	static Input* input;				// dispositivos de entrada da aplicação
	static float frameTime;				// tempo do quadro atual


	Engine();							// construtor
	~Engine();							// destrutor

	int Start(App* application);		// inicia o execução da aplicação

	// trata eventos do Windows
	static LRESULT CALLBACK EngineProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};
#endif