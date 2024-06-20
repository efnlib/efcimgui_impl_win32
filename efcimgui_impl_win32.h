#ifndef _EFCIMGUI_IMPL_WIN32_H
#define _EFCIMGUI_IMPL_WIN32_H

#include <efstdbool.h>

bool efcimgui_impl_win32_init(void *hwnd);
bool efcimgui_impl_win32_init_for_open_gl(void *hwnd);
void efcimgui_impl_win32_shutdown(void);
void efcimgui_impl_win32_new_frame(void);
void efcimgui_impl_win32_enable_dpi_awareness(void);
float efcimgui_impl_win32_get_dpi_scale_for_hwnd(void *hwnd);
float efcimgui_impl_win32_get_dpi_scale_for_monitor(void *monitor);
void efcimgui_impl_win32_enable_alpha_compositing(void *hwnd);

#endif