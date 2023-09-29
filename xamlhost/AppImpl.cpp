module App;

import xamlbridge;

class App : public ApplicationT<App, IXamlMetadataProvider>
{
public:
	void OnLaunched(LaunchActivatedEventArgs const&)
	{
		Resources().MergedDictionaries().Append(XamlControlsResources());
		window = Window();

		StackPanel stackPanel;
		stackPanel.HorizontalAlignment(HorizontalAlignment::Center);
		stackPanel.VerticalAlignment(VerticalAlignment::Center);

		Button button;
		button.Content(box_value(L"WinUI 3 Without XAML!"));

		window.Content(stackPanel);
		stackPanel.Children().Append(button);

		window.Activate();
	}
	IXamlType GetXamlType(TypeName const& type)
	{
		return provider.GetXamlType(type);
	}
	IXamlType GetXamlType(hstring const& fullname)
	{
		return provider.GetXamlType(fullname);
	}
	com_array<XmlnsDefinition> GetXmlnsDefinitions()
	{
		return provider.GetXmlnsDefinitions();
	}
private:
	Window window{ nullptr };
	XamlControlsXamlMetaDataProvider provider;
};