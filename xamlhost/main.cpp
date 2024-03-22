#include <Windows.h>
#undef GetCurrentTime

import xamlbridge;
import App;
import std;

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::XamlTypeInfo;
using namespace Microsoft::UI::Xaml::Markup;
using namespace Windows::UI::Xaml::Interop;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	init_apartment();
	Application::Start([](auto&&) { make<App>(); });
	return 0;
}
