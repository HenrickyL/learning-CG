#include "DXUT.h"
#include "WinApp.h"
#include <sstream>
using std::stringstream;

// ------------------------------------------------------------------------------
//                                  WinMain                                      
// ------------------------------------------------------------------------------

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine, _In_ int nCmdShow) {

	// cria motor e configura a janela
	Engine* engine = new Engine();
	engine->window->Mode(WINDOWED);
	engine->window->Size(1024, 600);
	engine->window->Color(0, 122, 204);
	engine->window->Title("Aplicação Windows");
	engine->window->Icon(IDI_ICON);
	engine->window->Cursor(IDC_CURSOR);

	// cria e executa a aplicação
	int exitCode = engine->Start(new WinApp());

	// finaliza execução
	delete engine;
	return exitCode;
}