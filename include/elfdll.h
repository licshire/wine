#ifndef __WINE_ELFDLL_H
#define __WINE_ELFDLL_H

WINE_MODREF *ELFDLL_LoadLibraryExA(LPCSTR libname, DWORD flags, DWORD *err);
HINSTANCE16 ELFDLL_LoadModule16(LPCSTR libname, BOOL implicit);
void ELFDLL_UnloadLibrary(WINE_MODREF *wm);

#if defined(HAVE_LIBDL) && defined(HAVE_DLFCN_H)

void *ELFDLL_dlopen(const char *libname, int flags);
extern char *extra_ld_library_path;

#endif

#endif
