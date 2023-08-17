#ifndef DXUT_ENGINE_H
#define DXUT_ENGINE_H

#include "Graphics.h"					// dispositivo gr�fico
#include "Window.h"						// janela da aplica��o
#include "Input.h"						// dispositivo de entrada
#include "Timer.h"						// medidor de tempo
#include "App.h"						// aplica��o gr�fica

// ---------------------------------------------------------------------------------

class Engine{
private:
	static Graphics* graphics;          // dispositivo gr�fico
	static Timer timer;					// medidor de tempo
	static bool paused;                 // estado do aplica��o

	float FrameTime();					// calcula o tempo do quadro
	int Loop();							// la�o principal do motor

public:
	static Window* window;				// janela da aplica��o
	static Input* input;				// dispositivos de entrada da aplica��o
	static App* app;					// aplica��o a ser executada
	static float frameTime;				// tempo do quadro atual

	Engine();							// construtor
	~Engine();							// destrutor

	int Start(App* application);		// inicia o execu��o da aplica��o

	static void Pause();                // pausa o motor
	static void Resume();               // reinicia o motor

	// trata eventos do Windows
	static LRESULT CALLBACK EngineProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};

//inline functions
inline void Engine::Pause()
{	paused = true; timer.Stop();}

inline void Engine::Resume()
{ 	paused = false; timer.Start();}
#endif