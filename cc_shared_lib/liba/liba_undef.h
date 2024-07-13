/*==============================================================================
                Copyright (c) 2003-2005 UGS Corporation
                   Unpublished - All Rights Reserved
 ==============================================================================*/

/*
    File Description:

    The header file that undefines the export symbols for the BOM library
@<DEL>@
===============================================================================
Date          Name                   Description
06-Aug-2002  Aaron Ruckman           Split libiman.dll project
05-Sep-2002  Aaron Ruckman           Update headers as part of dll splitiman project
25-Sep-2002  Aaron Ruckman           Need to fix the itk headers.
22-Nov-2002  Nigel Morse             fixup
30-Mar-2005  roudebus                Update copyright, block out history
$HISTORY$
60============================================================================
@<DEL>@ */

#if !defined(IPLIB)
#   error IPLIB is not defined
#endif

#undef A_API
#undef AEXPORT
#undef AGLOBAL
#undef APRIVATE

