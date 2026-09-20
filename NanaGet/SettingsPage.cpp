#include "pch.h"
#include "SettingsPage.h"
#if __has_include("SettingsPage.g.cpp")
#include "SettingsPage.g.cpp"
#endif

#include "NanaGetCore.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::NanaGet::implementation
{
    SettingsPage::SettingsPage(
        _In_ HWND WindowHandle) :
        m_WindowHandle(WindowHandle)
    {
        ::SetWindowTextW(
            this->m_WindowHandle,
            Mile::WinRT::GetLocalizedString(
                L"SettingsPage/GridTitleTextBlock/Text").c_str());
    }

    void SettingsPage::CustomDownloadFolderBrowseButtonClick(
        IInspectable const& sender,
        RoutedEventArgs const& e)
    {
        UNREFERENCED_PARAMETER(sender);
        UNREFERENCED_PARAMETER(e);
    }

    void SettingsPage::ApplyButtonClick(
        IInspectable const& sender,
        RoutedEventArgs const& e)
    {
        UNREFERENCED_PARAMETER(sender);
        UNREFERENCED_PARAMETER(e);

        try
        {
            // TODO
        }
        catch (...)
        {

        }

        ::PostMessageW(this->m_WindowHandle, WM_CLOSE, 0, 0);
    }

    void SettingsPage::CancelButtonClick(
        IInspectable const& sender,
        RoutedEventArgs const& e)
    {
        UNREFERENCED_PARAMETER(sender);
        UNREFERENCED_PARAMETER(e);

        ::PostMessageW(this->m_WindowHandle, WM_CLOSE, 0, 0);
    }
}
