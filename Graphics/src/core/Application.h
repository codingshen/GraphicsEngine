#pragma once

namespace Graphics {
	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

	public:
		//Engine functions
		void
			run();

	};

	Application* CreateGame();
}

