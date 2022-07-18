#pragma once

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SparkEngine/Window/WindowImpl.hpp>

#include <Windows.h>

#include <string>
#include <vector>

////////////////////////////////////////////////////////////
/// \brief Win32 WindowImpl
///
////////////////////////////////////////////////////////////
class WindowImplWin32 final : public WindowImpl
{
public:
    ////////////////////////////////////////////////////////////
    /// \brief Default constructor
    ///
    /// This constructor doesn't actually window,
    /// use the other constructors or call create() to do so.
    ///
    ////////////////////////////////////////////////////////////
    WindowImplWin32();

    ////////////////////////////////////////////////////////////
    /// \brief Constructor create window
    ///
    /// \param title  Title of the window
    /// \param width  Width of the window
    /// \param height Height of the window
    ///
    ////////////////////////////////////////////////////////////
    WindowImplWin32(std::string title, uint32_t width, uint32_t height);

    ////////////////////////////////////////////////////////////
    /// \brief Destructor
    ///
    /// Closes the window and frees all the resources attached to it.
    ///
    ////////////////////////////////////////////////////////////
    ~WindowImplWin32() override;

public:
    ////////////////////////////////////////////////////////////
    /// \brief Create window
    ///
    /// \param title  Title of the window
    /// \param width  Width of the window
    /// \param height Height of the window
    ///
    ////////////////////////////////////////////////////////////
    void create(std::string title, uint32_t width, uint32_t height) override;

    ////////////////////////////////////////////////////////////
    /// \brief Destroy window
    ///
    /// Close the window and destroy all the attached resources.
    ///
    ////////////////////////////////////////////////////////////
    void destroy() override;

    ////////////////////////////////////////////////////////////
    /// \brief Proccess messages
    ///
    /// \return True if have another message.
    ///
    ////////////////////////////////////////////////////////////
    bool processMessages() override;

    ////////////////////////////////////////////////////////////
    /// \brief Tell whether or not the window is open
    ///
    /// \return True if the window is open, false if it has been closed.
    ///
    ////////////////////////////////////////////////////////////
    bool isOpen() const override;

private:
    ////////////////////////////////////////////////////////////
    /// \brief Function called whenever one of our windows receives a message
    ///
    /// \param hWnd   Handle of the window
    /// \param uMsg   Message received
    /// \param wParam First parameter of the message
    /// \param lParam Second parameter of the message
    ///
    /// \return True to discard the event after it has been processed
    ///
    ////////////////////////////////////////////////////////////
    static LRESULT CALLBACK globalOnEvent(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
    ////////////////////////////////////////////////////////////
    // Member data
    ////////////////////////////////////////////////////////////
    HINSTANCE   m_hInstance; //!< Handle instance
    HWND        m_hWnd;      //!< Window handle
    LPCSTR      m_className; //!< Window class name
    std::string m_title;     //!< Window title
    uint32_t    m_width;     //!< Window width
    uint32_t    m_height;    //!< Window height
    bool        m_isOpen;    //!< Window is open?
};