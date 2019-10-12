//ConverterDLL.h
#ifndef __CONVERTERDLL_h__
#define __CONVERTERDLL_h__

#ifdef CONVERTERDLL_EXPORTS
#define CONVERTERDLL_API __declspec(dllexport)
#else
#define CONVERTERDLL_API __declspec(dllimport)
#endif

CONVERTERDLL_API int asciiBinaryToInt(char* s);
CONVERTERDLL_API int asciiHEXToInt(char* s);
CONVERTERDLL_API double asciiToDouble(char* s);

#endif

