#include <Graphics.h>

class Sandbox : public Graphics::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Graphics::Application* Graphics::CreateGame() {
	return new Sandbox();
}
