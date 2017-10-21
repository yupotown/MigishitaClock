
# include <Siv3D.hpp>

void Main()
{
	Window::SetTitle(L"MigishitaClock");
	Window::Resize(200, 60);

	const Font font(30);

	while (System::Update())
	{
		const auto time = DateTime::Now();
		font(time.format(L"HH:mm:ss")).draw();
	}
}
