module;
#include <winrt/Microsoft.UI.Xaml.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.Xaml.Interop.h>
export module xamlbridge;

export
namespace winrt
{
	using winrt::box_value;
	using winrt::com_array;
	using winrt::hstring;
	using winrt::operator==;

	namespace impl
	{
		using winrt::impl::consume_Microsoft_UI_Xaml_IApplication;
		using winrt::impl::consume_Microsoft_UI_Xaml_IFrameworkElement;
		using winrt::impl::consume_Microsoft_UI_Xaml_IWindow;
		using winrt::impl::consume_Microsoft_UI_Xaml_Controls_IContentControl;
		using winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider;
		using winrt::impl::consume_Windows_Foundation_Collections_IVector;
	}

	namespace Microsoft
	{
		namespace UI
		{
			namespace Xaml
			{
				using winrt::Microsoft::UI::Xaml::Application;
				using winrt::Microsoft::UI::Xaml::ApplicationT;
				using winrt::Microsoft::UI::Xaml::HorizontalAlignment;
				using winrt::Microsoft::UI::Xaml::LaunchActivatedEventArgs;
				using winrt::Microsoft::UI::Xaml::ResourceDictionary;
				using winrt::Microsoft::UI::Xaml::VerticalAlignment;
				using winrt::Microsoft::UI::Xaml::Window;

				namespace Controls
				{
					using winrt::Microsoft::UI::Xaml::Controls::Button;
					using winrt::Microsoft::UI::Xaml::Controls::StackPanel;
					using winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources;
				}

				namespace Markup
				{
					using winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider;
					using winrt::Microsoft::UI::Xaml::Markup::IXamlType;
					using winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition;
				}

				namespace XamlTypeInfo
				{
					using winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider;
				}
			}
		}
	}

	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{
				namespace Interop
				{
					using winrt::Windows::UI::Xaml::Interop::TypeName;
				}
			}
		}
	}
}