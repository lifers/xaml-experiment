module App;

import xamlbridge;
using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::XamlTypeInfo;
using namespace Microsoft::UI::Xaml::Markup;
using namespace Windows::UI::Xaml::Interop;

class App : public ApplicationT<App, IXamlMetadataProvider>
{
public:
	void OnLaunched(LaunchActivatedEventArgs const&)
	{
		this->Resources().MergedDictionaries().Append(XamlControlsResources());
		this->window = Window();

		StackPanel stackPanel;
		stackPanel.HorizontalAlignment(HorizontalAlignment::Center);
		stackPanel.VerticalAlignment(VerticalAlignment::Center);

		Button button;
		button.Content(box_value(L"WinUI 3 Without XAML!"));

		this->window.Content(stackPanel);
		stackPanel.Children().Append(button);

		this->window.Activate();
	}
	IXamlType GetXamlType(TypeName const& type)
	{
		return this->provider.GetXamlType(type);
	}
	IXamlType GetXamlType(hstring const& fullname)
	{
		return this->provider.GetXamlType(fullname);
	}
	com_array<XmlnsDefinition> GetXmlnsDefinitions()
	{
		return this->provider.GetXmlnsDefinitions();
	}
private:
	Window window{ nullptr };
	XamlControlsXamlMetaDataProvider provider;
};