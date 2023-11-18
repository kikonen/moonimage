// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MOONIMAGE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MOONIMAGE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MOONIMAGE_EXPORTS
#define MOONIMAGE_API __declspec(dllexport)
#else
#define MOONIMAGE_API __declspec(dllimport)
#endif

//// This class is exported from the dll
//class MOONIMAGE_API Cmoonimage {
//public:
//	Cmoonimage(void);
//	// TODO: add your methods here.
//};
//
//extern MOONIMAGE_API int nmoonimage;
//
//MOONIMAGE_API int fnmoonimage(void);
