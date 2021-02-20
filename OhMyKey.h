#ifndef OHMYKEY_H
#define OHMYKEY_H

#if defined(OHMYKEYLIB)
#define LIBRARY_EXPORT __declspec(dllexport)
#else
#define LIBRARY_EXPORT
#endif

extern "C" int LIBRARY_EXPORT EMULATE(int key_hex);

#endif