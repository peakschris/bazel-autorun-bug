/*==============================================================================
                Copyright (c) 2003-2005 UGS Corporation
                   Unpublished - All Rights Reserved
 ==============================================================================*/

/*
    File Description:

    The header file that defines the export symbols for the A library
*/

#if !defined(IPLIB)
#   error IPLIB is not defined
#endif

/* Handwritten code should use A_API, not AEXPORT */

#define A_API AEXPORT

/* Support BOMEXPORT for autogenerated schema/pif code only */

#if IPLIB==liba || IPLIB==libcore
#   if defined(__lint)
#       define AEXPORT       __export(a)
#       define AGLOBAL       extern __global(a)
#       define APRIVATE      extern __private(a)
#   elif defined(_WIN32)
#       define AEXPORT       __declspec(dllexport)
#       define AGLOBAL       extern __declspec(dllexport)
#       define APRIVATE      extern
#   else
#       define AEXPORT
#       define AGLOBAL       extern
#       define APRIVATE      extern
#   endif
#else
#   if defined(__lint)
#       define AEXPORT       __export(a)
#       define AGLOBAL       extern __global(a)
#   elif defined(_WIN32) && !defined(WNT_STATIC_LINK)
#       define AEXPORT      __declspec(dllimport)
#       define AGLOBAL       extern __declspec(dllimport)
#   else
#       define AEXPORT
#       define AGLOBAL       extern
#   endif
#endif

