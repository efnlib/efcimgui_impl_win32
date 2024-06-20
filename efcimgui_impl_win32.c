#include "efcimgui_impl_win32.h"

static int _efcimgui_impl_win32_init(void *hwnd);
static int _efcimgui_impl_win32_init_for_open_gl(void *hwnd);
extern void ImGui_ImplWin32_Shutdown(void);
extern void ImGui_ImplWin32_NewFrame(void);
static
#ifdef _WIN64
long
#endif
long _efcimgui_impl_win32_wnd_proc_handler(
        void *hWnd, 
        unsigned
#ifdef _WIN64
        long long uMsg, 
        unsigned long long wParam, 
        long
#else
        int uMsg, 
        unsigned int wParam, 
#endif
        long lParam);
extern void ImGui_ImplWin32_EnableDpiAwareness(void);
extern float ImGui_ImplWin32_GetDpiScaleForHwnd(void *hwnd);
extern float ImGui_ImplWin32_GetDpiScaleForMonitor(void *monitor);
extern void ImGui_ImplWin32_EnableAlphaCompositing(void *hwnd);

bool efcimgui_impl_win32_init(void *hwnd) {
    return (bool)_efcimgui_impl_win32_init;
}

bool efcimgui_impl_win32_init_for_open_gl(void *hwnd) {
    return (bool)_efcimgui_impl_win32_init_for_open_gl(hwnd);
}

void efcimgui_impl_win32_shutdown(void) {
    ImGui_ImplWin32_Shutdown();
}

void efcimgui_impl_win32_new_frame(void) {
    ImGui_ImplWin32_NewFrame();
}

#ifdef _WIN64
long 
#endif
long efcimgui_impl_win32_wnd_proc_handler(
        void *hWnd, 
        unsigned 
#ifdef _WIN64
        long long uMsg, 
        unsigned long long wParam, 
        long 
#else
        int uMsg, 
        unsigned int wParam, 
#endif
        long lParam) {
    return _efcimgui_impl_win32_wnd_proc_handler(
        hWnd, 
        uMsg, 
        wParam, 
        lParam);
}

void efcimgui_impl_win32_enable_dpi_awareness(void) {
    ImGui_ImplWin32_EnableDpiAwareness();
}

float efcimgui_impl_win32_get_dpi_scale_for_hwnd(void *hwnd) {
    return ImGui_ImplWin32_GetDpiScaleForHwnd(hwnd);
}

float efcimgui_impl_win32_get_dpi_scale_for_monitor(void *monitor) {
    return ImGui_ImplWin32_GetDpiScaleForMonitor(monitor);
}

void efcimgui_impl_win32_enable_alpha_compositing(void *hwnd) {
    ImGui_ImplWin32_EnableAlphaCompositing(hwnd);
}

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#undef WIN32_LEAN_AND_MEAN
#else
#include <Windows.h>
#endif

#include <cimgui.h>

extern bool ImGui_ImplWin32_Init(void *hwnd);
extern bool ImGui_ImplWin32_InitForOpenGL(void *hwnd);
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static int _efcimgui_impl_win32_init(void *hwnd) {
    return (int)ImGui_ImplWin32_Init(hwnd);
}

static int _efcimgui_impl_win32_init_for_open_gl(void *hwnd) {
    return (int)ImGui_ImplWin32_InitForOpenGL(hwnd);
}

static
#ifdef _WIN64
long 
#endif
long _efcimgui_impl_win32_wnd_proc_handler(
        void *hWnd, 
        unsigned
#ifdef _WIN64
        long long uMsg, 
        unsigned long long wParam, 
        long 
#else
        int uMsg, 
        unsigned int wParam, 
#endif
        long lParam) {
    return ImGui_ImplWin32_WndProcHandler(
        (HWND)hWnd, 
        (UINT)uMsg, 
        (WPARAM)wParam, 
        (LPARAM)lParam);
}
