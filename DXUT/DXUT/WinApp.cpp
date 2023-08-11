#include "WinApp.h"

void WinApp::Init()
{
	// captura posi��o do mouse
	lastX = input->MouseX();
	lastY = input->MouseY();

	// captura tamanho e tipo de janela
	textSize << "Tamanho: " << window->Width() << " x " << window->Height();
	textMode << "Formato: " << (window->Mode() == WINDOWED ? "Em Janela" : "Tela Cheia");
	textMouse << input->MouseX() << " x " << input->MouseY();
}

// ------------------------------------------------------------------------------

void WinApp::Update()
{
	// sai com o pressionamento da tecla ESC
	if (input->KeyPress(VK_ESCAPE))
		window->Close();

	// converte posi��o do mouse em texto para exibi��o
	textMouse.str("");
	textMouse << input->MouseX() << " x " << input->MouseY();

	// se o mouse mudou de posi��o
	if (lastX != input->MouseX() || lastY != input->MouseY())
	{
		window->Clear();
		Display();
	}

	// atualiza posi��o do mouse
	lastX = input->MouseX();
	lastY = input->MouseY();
}

// ------------------------------------------------------------------------------

void WinApp::Display()
{
	window->Print("Window App Demo", 10, 10, RGB(255, 255, 255));
	window->Print(textSize.str(), 10, 50, RGB(255, 255, 255));
	window->Print(textMode.str(), 10, 75, RGB(255, 255, 255));
	window->Print(textMouse.str(), 10, 100, RGB(255, 255, 255));
}

// ------------------------------------------------------------------------------

void WinApp::Finalize()
{
}