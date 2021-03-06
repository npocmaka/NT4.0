/*++
 *
 *  WOW v1.0
 *
 *  Copyright (c) 1991, 1992, 1993 Microsoft Corporation
 *
 *  WKTBL2.h
 *  WOW32 kernel API thunks
 *
 *  This file is included into the master thunk table.
 *
--*/
    {W32FUN(UNIMPLEMENTEDAPI,               "DUMMYENTRY",              MOD_KERNEL,    0)},
    {W32FUN(WK32FatalExit,                  "FATALEXIT",               MOD_KERNEL,    sizeof(FATALEXIT16))},
    {W32FUN(WK32ExitKernel,                 "EXITKERNEL",              MOD_KERNEL,    sizeof(EXITKERNEL16))},
    {W32FUN(LOCALAPI,                       "GETVERSION",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALINIT",               MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALALLOC",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALREALLOC",            MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALFREE",               MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALLOCK",               MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALUNLOCK",             MOD_KERNEL,    0)},

  /*** 0010 ***/
    {W32FUN(LOCALAPI,                       "LOCALSIZE",               MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALHANDLE",             MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALFLAGS",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALCOMPACT",            MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCALNOTIFY",             MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALALLOC",             MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALREALLOC",           MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALFREE",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALLOCK",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALUNLOCK",            MOD_KERNEL,    0)},

  /*** 0020 ***/
    {W32FUN(LOCALAPI,                       "GLOBALSIZE",              MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALHANDLE",            MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALFLAGS",             MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOCKSEGMENT",             MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "UNLOCKSEGMENT",           MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALCOMPACT",           MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GLOBALFREEALL",           MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                        MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GLOBALMASTERHANDLE",      MOD_KERNEL,    0)},
    {W32FUN(WK32Yield,                      "YIELD",                   MOD_KERNEL,    0)},

  /*** 0030 ***/
    {W32FUN(WK32WaitEvent,                  "WAITEVENT",               MOD_KERNEL,    sizeof(WAITEVENT16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "POSTEVENT",               MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "SETPRIORITY",             MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "LOCKCURRENTTASK",         MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "SETTASKQUEUE",            MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETTASKQUEUE",            MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETCURRENTTASK",          MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETCURRENTPDB",           MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "SETTASKSIGNALPROC",       MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                        MOD_KERNEL,    0)},

  /*** 0040 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "",                        MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "ENABLEDOS",               MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DISABLEDOS",              MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                        MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                        MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "LOADMODULE",              MOD_KERNEL,    sizeof(LOADMODULE16))},
    {W32FUN(LOCALAPI,                       "FREEMODULE",              MOD_KERNEL,    sizeof(FREEMODULE16))},
    {W32FUN(WK32WowGetModuleHandle,         "GETMODULEHANDLE",         MOD_KERNEL,    sizeof(WOWGETMODULEHANDLE16))},
    {W32FUN(LOCALAPI,                       "GETMODULEUSAGE",          MOD_KERNEL,    sizeof(GETMODULEUSAGE16))},
    {W32FUN(WK32GetModuleFileName,          "GETMODULEFILENAME",       MOD_KERNEL,    sizeof(GETMODULEFILENAME16))},

  /*** 0050 ***/
    {W32FUN(LOCALAPI,                       "GETPROCADDRESS",          MOD_KERNEL, sizeof(GETPROCADDRESS16))},
    {W32FUN(LOCALAPI,                       "MAKEPROCINSTANCE",        MOD_KERNEL, sizeof(MAKEPROCINSTANCE16))},
    {W32FUN(LOCALAPI,                       "FREEPROCINSTANCE",        MOD_KERNEL, sizeof(FREEPROCINSTANCE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "CALLPROCINSTANCE",        MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETINSTANCEDATA",         MOD_KERNEL, sizeof(GETINSTANCEDATA16))},
    {W32FUN(LOCALAPI,                       "CATCH",                   MOD_KERNEL, sizeof(CATCH16))},
    {W32FUN(LOCALAPI,                       "THROW",                   MOD_KERNEL, sizeof(THROW16))},
    {W32FUN(WK32GetProfileInt,              "GETPROFILEINT",           MOD_KERNEL,    sizeof(GETPROFILEINT16))},
    {W32FUN(WK32GetProfileString,           "GETPROFILESTRING",        MOD_KERNEL,    sizeof(GETPROFILESTRING16))},
    {W32FUN(WK32WriteProfileString,         "WRITEPROFILESTRING",      MOD_KERNEL,    sizeof(WRITEPROFILESTRING16))},

  /*** 0060 ***/
    {W32FUN(LOCALAPI,                       "FINDRESOURCE",            MOD_KERNEL, sizeof(FINDRESOURCE16))},
    {W32FUN(LOCALAPI,                       "LOADRESOURCE",            MOD_KERNEL, sizeof(LOADRESOURCE16))},
    {W32FUN(LOCALAPI,                       "LOCKRESOURCE",            MOD_KERNEL, sizeof(LOCKRESOURCE16))},
    {W32FUN(LOCALAPI,                       "FREERESOURCE",            MOD_KERNEL, sizeof(FREERESOURCE16))},
    {W32FUN(LOCALAPI,                       "ACCESSRESOURCE",          MOD_KERNEL, sizeof(ACCESSRESOURCE16))},
    {W32FUN(LOCALAPI,                       "SIZEOFRESOURCE",          MOD_KERNEL, sizeof(SIZEOFRESOURCE16))},
    {W32FUN(LOCALAPI,                       "ALLOCRESOURCE",           MOD_KERNEL, sizeof(ALLOCRESOURCE16))},
    {W32FUN(LOCALAPI,                       "SETRESOURCEHANDLER",      MOD_KERNEL, sizeof(SETRESOURCEHANDLER16))},
    {W32FUN(LOCALAPI,                       "INITATOMTABLE",           MOD_KERNEL, sizeof(INITATOMTABLE16))},
    {W32FUN(LOCALAPI,                       "FINDATOM",                MOD_KERNEL, sizeof(FINDATOM16))},

  /*** 0070 ***/
    {W32FUN(LOCALAPI,                       "ADDATOM",                 MOD_KERNEL, sizeof(ADDATOM16))},
    {W32FUN(LOCALAPI,                       "DELETEATOM",              MOD_KERNEL, sizeof(DELETEATOM16))},
    {W32FUN(LOCALAPI,                       "GETATOMNAME",             MOD_KERNEL, sizeof(GETATOMNAME16))},
    {W32FUN(LOCALAPI,                       "GETATOMHANDLE",           MOD_KERNEL, sizeof(GETATOMHANDLE16))},
    {W32FUN(LOCALAPI,                       "OPENFILE",                MOD_KERNEL, sizeof(OPENFILE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "OPENPATHNAME",            MOD_KERNEL,       0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DELETEPATHNAME",          MOD_KERNEL,       0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "RESERVED1",               MOD_KERNEL,       0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "RESERVED2",               MOD_KERNEL,       0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "RESERVED3",               MOD_KERNEL,       0)},

  /*** 0080 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "RESERVED4",               MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LCLOSE",                 MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LREAD",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LCREAT",                 MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LLSEEK",                 MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LOPEN",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "_LWRITE",                 MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "RESERVED5",               MOD_KERNEL,   0)},
    {W32FUN(LOCALAPI,                       "LSTRCPY",                 MOD_KERNEL,   sizeof(LSTRCPY16))},
    {W32FUN(LOCALAPI,                       "LSTRCAT",                 MOD_KERNEL,   sizeof(LSTRCAT16))},

  /*** 0090 ***/
    {W32FUN(LOCALAPI,                       "LSTRLEN",                 MOD_KERNEL,  sizeof(LSTRLEN16))},
    {W32FUN(LOCALAPI,                       "INITTASK",                MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                       "GETTEMPDRIVE",            MOD_KERNEL,  sizeof(GETTEMPDRIVE16))},
    {W32FUN(LOCALAPI,                       "GETCODEHANDLE",           MOD_KERNEL,  sizeof(GETCODEHANDLE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "DEFINEHANDLETABLE",       MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                       "LOADLIBRARY",             MOD_KERNEL,  sizeof(LOADLIBRARY16))},
    {W32FUN(LOCALAPI,                       "FREELIBRARY",             MOD_KERNEL,  sizeof(FREELIBRARY16))},
    {W32FUN(LOCALAPI,                       "GETTEMPFILENAME",         MOD_KERNEL,  sizeof(GETTEMPFILENAME16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETLASTDISKCHANGE",       MOD_KERNEL,  0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETLPERRMODE",            MOD_KERNEL,  0)},

  /*** 0100 ***/
    {W32FUN(LOCALAPI,                       "VALIDATECODESEGMENTS",    MOD_KERNEL, 0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "NOHOOKDOSCALL",           MOD_KERNEL, 0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DOS3CALL",                MOD_KERNEL, 0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "NETBIOSCALL",             MOD_KERNEL, 0)},
    {W32FUN(LOCALAPI,                       "GETCODEINFO",             MOD_KERNEL, sizeof(GETCODEINFO16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETEXEVERSION",           MOD_KERNEL, 0)},
    {W32FUN(LOCALAPI,                       "SETSWAPAREASIZE",         MOD_KERNEL, sizeof(SETSWAPAREASIZE16))},
    {W32FUN(LOCALAPI,                       "SETERRORMODE",            MOD_KERNEL, sizeof(SETERRORMODE16))},
    {W32FUN(LOCALAPI,                       "SWITCHSTACKTO",           MOD_KERNEL, sizeof(SWITCHSTACKTO16))},
    {W32FUN(LOCALAPI,                       "SWITCHSTACKBACK",         MOD_KERNEL, 0)},

  /*** 0110 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "PATCHCODEHANDLE",         MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GLOBALWIRE",              MOD_KERNEL,    sizeof(GLOBALWIRE16))},
    {W32FUN(LOCALAPI,                       "GLOBALUNWIRE",            MOD_KERNEL,    sizeof(GLOBALUNWIRE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "__AHSHIFT",               MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__AHINCR",                MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "OUTPUTDEBUGSTRING",       MOD_KERNEL,    sizeof(OUTPUTDEBUGSTRING16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "INITLIB",                 MOD_KERNEL,    0)},
    {W32FUN(WK32OldYield,                   "OLDYIELD",                MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETTASKQUEUEDS",          MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                       "GETTASKQUEUEES",          MOD_KERNEL,    0)},

  /*** 0120 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "UNDEFDYNLINK",             MOD_KERNEL,   0)},
    {W32FUN(LOCALAPI,                       "LOCALSHRINK",              MOD_KERNEL,   sizeof(LOCALSHRINK16))},
    {W32FUN(LOCALAPI,                       "ISTASKLOCKED",             MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "KBDRST",                   MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "ENABLEKERNEL",             MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DISABLEKERNEL",            MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "MEMORYFREED",              MOD_KERNEL,   0)},
    {W32FUN(WK32GetPrivateProfileInt,       "GETPRIVATEPROFILEINT",     MOD_KERNEL,   sizeof(GETPRIVATEPROFILEINT16))},
    {W32FUN(WK32GetPrivateProfileString,    "GETPRIVATEPROFILESTRING",  MOD_KERNEL,   sizeof(GETPRIVATEPROFILESTRING16))},
    {W32FUN(WK32WritePrivateProfileString,  "WRITEPRIVATEPROFILESTRING",MOD_KERNEL,   sizeof(WRITEPRIVATEPROFILESTRING16))},

  /*** 0130 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "FILECDR",                  MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                       "GETDOSENVIRONMENT",        MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                       "GETWINFLAGS",              MOD_KERNEL,  0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETEXEPTR",                MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                       "GETWINDOWSDIRECTORY",      MOD_KERNEL,  sizeof(GETWINDOWSDIRECTORY16))},
    {W32FUN(LOCALAPI,                       "GETSYSTEMDIRECTORY",       MOD_KERNEL,  sizeof(GETSYSTEMDIRECTORY16))},
    {W32FUN(WK32GetDriveType,               "GETDRIVETYPE",             MOD_KERNEL,  sizeof(GETDRIVETYPE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "FATALAPPEXIT",             MOD_KERNEL,  0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETHEAPSPACES",            MOD_KERNEL,  0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DOSIGNAL",                 MOD_KERNEL,  0)},

  /*** 0140 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "SETSIGHANDLER",          MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "INITTASK1",              MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(WK32GetVersionEx,               "GETVERSIONEX",           MOD_KERNEL,     sizeof(GETVERSIONEX16))},

  /*** 0150 ***/
    {W32FUN(WK32DirectedYield,              "DIRECTEDYIELD",          MOD_KERNEL,     sizeof(DIRECTEDYIELD16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "WINOLDAPCALL",           MOD_KERNEL,     0)},
    {W32FUN(LOCALAPI,                       "GETNUMTASKS",            MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(LOCALAPI,                      "GLOBALNOTIFY",            MOD_KERNEL,     sizeof(GLOBALNOTIFY16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETTASKDS",              MOD_KERNEL,     0)},
    {W32FUN(LOCALAPI,                     "LIMITEMSPAGES",            MOD_KERNEL,     sizeof(LIMITEMSPAGES16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETCURPID",              MOD_KERNEL,     0)},
    {W32FUN(LOCALAPI,                       "ISWINOLDAPTASK",         MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GLOBALHANDLENORIP",      MOD_KERNEL,     0)},

  /*** 0160 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "EMSCOPY",                 MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "LOCALCOUNTFREE",          MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "LOCALHEAPSIZE",           MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                   "GLOBALLRUOLDEST",             MOD_KERNEL,    sizeof(GLOBALLRUOLDEST16))},
    {W32FUN(LOCALAPI,                   "GLOBALLRUNEWEST",             MOD_KERNEL,    sizeof(GLOBALLRUNEWEST16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "A20PROC",                 MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                           "WINEXEC",             MOD_KERNEL,        sizeof(WINEXEC16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETEXPWINVER",            MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DIRECTRESALLOC",          MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                      "GETFREESPACE",             MOD_KERNEL,   sizeof(GETFREESPACE16))},

  /*** 0170 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "ALLOCCSTODSALIAS",        MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                  "ALLOCDSTOCSALIAS",             MOD_KERNEL,    sizeof(ALLOCDSTOCSALIAS16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "ALLOCALIAS",              MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__ROMBIOS",               MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__A000h",                 MOD_KERNEL,    0)},
    {W32FUN(LOCALAPI,                     "ALLOCSELECTOR",             MOD_KERNEL,    sizeof(ALLOCSELECTOR16))},
    {W32FUN(LOCALAPI,                     "FREESELECTOR",              MOD_KERNEL,    sizeof(FREESELECTOR16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "PRESTOCHANGOSELECTOR",    MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__WINFLAGS",              MOD_KERNEL,    0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__D000h",                 MOD_KERNEL,    0)},

  /*** 0180 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "LONGPTRADD",               MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__B000h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__B800h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__0000h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GLOBALDOSALLOC",           MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GLOBALDOSFREE",            MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETSELECTORBASE",          MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "SETSELECTORBASE",          MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETSELECTORLIMIT",         MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "SETSELECTORLIMIT",         MOD_KERNEL,   0)},

  /*** 0190 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "__E000h",                  MOD_KERNEL,   0)},
    {W32FUN(LOCALAPI,                  "GLOBALPAGELOCK",                MOD_KERNEL,   sizeof(GLOBALPAGELOCK16))},
    {W32FUN(LOCALAPI,                  "GLOBALPAGEUNLOCK",              MOD_KERNEL,   sizeof(GLOBALPAGEUNLOCK16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "__0040h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__F000h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "__C000h",                  MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "SELECTORACCESSRIGHTS",     MOD_KERNEL,   0)},
    {W32FUN(LOCALAPI,                    "GLOBALFIX",                   MOD_KERNEL,sizeof(GLOBALFIX16))},
    {W32FUN(LOCALAPI,                    "GLOBALUNFIX",                 MOD_KERNEL,sizeof(GLOBALUNFIX16))},
    {W32FUN(LOCALAPI,                    "SETHANDLECOUNT",              MOD_KERNEL,sizeof(SETHANDLECOUNT16))},

  /*** 0200 ***/
    {W32FUN(LOCALAPI,                "VALIDATEFREESPACES",              MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "REPLACEINST",              MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "REGISTERPTRACE",           MOD_KERNEL,   0)},
    {W32FUN(LOCALAPI,                     "DEBUGBREAK",                 MOD_KERNEL,  0)},
    {W32FUN(LOCALAPI,                     "SWAPRECORDING",              MOD_KERNEL,  sizeof(SWAPRECORDING16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "CVWBREAK",                 MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "ALLOCSELECTORARRAY",       MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "ISDBCSLEADBYTE",           MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "LOCALHANDLEDELTA",         MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETSETKERNELDOSPROC",      MOD_KERNEL,   0)},

  /*** 0210 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "FARVALIDATEPOINTER",       MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETLASTCRITICALERROR",     MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "DEBUGDEFINESEGMENT",       MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "WRITEOUTPROFILES",         MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "GETFREEMEMINFO",           MOD_KERNEL,   0)},
    {W32FUN(WK32WowShouldWeSayWin95,        "WowShouldWeSayWin95",      MOD_KERNEL,   sizeof(WOWSHOULDWESAYWIN9516))},
    {W32FUN(WK32RegEnumKey32,               "RegEnumKey32",             MOD_KERNEL,   sizeof(REGENUMKEY3216))},
    {W32FUN(WK32RegOpenKey32,               "RegOpenKey32",             MOD_KERNEL,   sizeof(REGOPENKEY3216))},
    {W32FUN(WK32FreeResource,               "FREERESOURCE",             MOD_KERNEL,   sizeof(FREERESOURCE16))},
    {W32FUN(WK32FileRead,                   "WOWFileRead",              MOD_KERNEL,   sizeof(FILEIOREAD16))},

  /*** 0220 ***/
    {W32FUN(WK32RegCloseKey32,              "RegCloseKey32",               MOD_KERNEL,sizeof(REGCLOSEKEY3216))},
    {W32FUN(WK32FileLSeek,                  "WOWFileLSeek",                MOD_KERNEL,sizeof(FILEIOLSEEK16))},
    {W32FUN(WK32KernelTrace,                "WOWKernelTrace",              MOD_KERNEL,sizeof(KERNELTRACE16))},
    {W32FUN(WK32RegEnumValue32,             "RegEnumValue32",              MOD_KERNEL,sizeof(REGENUMVALUE3216))},
    {W32FUN(WK32RegisterShellWindowHandle,  "WOWRegisterShellWindowHandle",MOD_KERNEL,sizeof(WOWREGISTERSHELLWINDOWHANDLE16))},
    {W32FUN(WK32LoadModule32,               "WOWLoadModule",               MOD_KERNEL,sizeof(WOWLOADMODULE16))},
    {W32FUN(WK32WOWQueryPerformanceCounter, "WOWQueryPerformanceCounter",  MOD_KERNEL,sizeof(WOWQUERYPERFORMANCECOUNTER16))},
    {W32FUN(WK32WOWOutputDebugString,       "WOWOUTPUTDEBUGSTRING",        MOD_KERNEL,sizeof(OUTPUTDEBUGSTRING16))},
    {W32FUN((LPFNW32)WK32WowCursorIconOp,   "WowCursorIconOp",             MOD_KERNEL,sizeof(WOWCURSORICONOP16))},
    {W32FUN((LPFNW32)WK32WowFailedExec,     "WOWFailedExec",               MOD_KERNEL,0)},

  /*** 0230 ***/
    {W32FUN((LPFNW32)W32GetFastAddress,     "WOWGetFastAddress",           MOD_KERNEL,0)},
    {W32FUN((LPFNW32)WK32WowCloseComPort,   "WowCloseComPort",             MOD_KERNEL,sizeof(WOWCLOSECOMPORT16))},
    {W32FUN((LPFNW32)WK32WowDelFile,        "WowDelFile",                  MOD_KERNEL,sizeof(WOWDELFILE16))},
    {W32FUN((LPFNW32)WK32VirtualAlloc,      "VirtualAlloc",                MOD_KERNEL,sizeof(VIRTUALALLOC16))},
    {W32FUN((LPFNW32)WK32VirtualFree,       "VirtualFree",                 MOD_KERNEL,sizeof(VIRTUALFREE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "VirtualLock",                 MOD_KERNEL,sizeof(VIRTUALLOCK16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "VirtualUnLock",               MOD_KERNEL,sizeof(VIRTUALUNLOCK16))},
    {W32FUN((LPFNW32)WK32GlobalMemoryStatus,"GlobalMemoryStatus",          MOD_KERNEL,sizeof(GLOBALMEMORYSTATUS16))},
    {W32FUN((LPFNW32)W32GetFastCbRetAddress,"WOWGetFastCbRetAddress",      MOD_KERNEL,0)},
    {W32FUN((LPFNW32)W32GetTableOffsets,    "WOWGetTableOffsets",          MOD_KERNEL,sizeof(WOWGETTABLEOFFSETS16))},

  /*** 0240 ***/
    {W32FUN((LPFNW32)WK32KillRemoteTask,    "WowKillRemoteTask",           MOD_KERNEL,0)},
    {W32FUN((LPFNW32)WK32WOWNotifyWOW32,    "WOWNotifyWOW32",              MOD_KERNEL,sizeof(WOWNOTIFYWOW3216))},
    {W32FUN(WK32FileOpen,                   "WOWFileOpen",                 MOD_KERNEL,sizeof(FILEIOOPEN16))},
    {W32FUN(WK32FileClose,                  "WOWFileClose",                MOD_KERNEL,sizeof(FILEIOCLOSE16))},
    {W32FUN((LPFNW32)WK32WowSetIdleHook,    "WOWSetIdleHook",              MOD_KERNEL,0)},
    {W32FUN(WU32SysErrorBox,                "SYSERRORBOX",                 MOD_KERNEL,  sizeof(KSYSERRORBOX16))},
    {W32FUN((LPFNW32)WK32WowIsKnownDLL,     "WowIsKnownDLL",               MOD_KERNEL, sizeof(WOWISKNOWNDLL16))},
    {W32FUN((LPFNW32)W32WowDdeFreeHandle,   "WowDdeFreeHandle",            MOD_KERNEL,sizeof(WOWDDEFREEHANDLE16))},
    {W32FUN(WK32FileGetAttributes,          "WOWFileGetAttributes",        MOD_KERNEL,sizeof(FILEIOGETATTRIBUTES16))},
    {W32FUN(WK32FileGetDateTime,            "WOWFileGetDateTime",          MOD_KERNEL,sizeof(FILEIOGETDATETIME16))},

  /*** 0250 ***/
    {W32FUN(WK32FileLock,                   "WOWFileLock",                 MOD_KERNEL,sizeof(FILEIOLOCK16))},
    {W32FUN((LPFNW32)WK32LoadLibraryEx32,   "LoadLibraryEx32",             MOD_KERNEL,sizeof(LOADLIBRARYEX32))},
    {W32FUN((LPFNW32)WK32FreeLibrary32,     "FreeLibrary32",               MOD_KERNEL,sizeof(FREELIBRARY32))},
    {W32FUN((LPFNW32)WK32GetProcAddress32,  "GetProcAddress32",            MOD_KERNEL,sizeof(GETPROCADDRESS32))},
    {W32FUN((LPFNW32)WK32GetVDMPointer32,   "GetVDMPointer32",             MOD_KERNEL,sizeof(GETVDMPOINTER32))},
    {W32FUN((LPFNW32)WK32ICallProc32,       "ICallProc32",                 MOD_KERNEL,sizeof(ICALLPROC32))},
    {W32FUN(UNIMPLEMENTEDAPI,               "ExitWindowsExecContinue",     MOD_KERNEL,0)},
    {W32FUN(WK32FileFindFirst,              "WOWFindFirst",                MOD_KERNEL,sizeof(WOWFINDFIRST16))},
    {W32FUN(WK32FileFindNext,               "WOWFindNext",                 MOD_KERNEL,sizeof(WOWFINDNEXT16))},
    {W32FUN(WK32SetDefaultDrive,            "WOWSetDefaultDrive",          MOD_KERNEL,0)},

  /*** 0260 ***/
    {W32FUN(WK32GetCurrentDirectory,        "WOWGetCurrentDirectory",      MOD_KERNEL,0)},
    {W32FUN(WK32SetCurrentDirectory,        "WOWSetCurrentDirectory",      MOD_KERNEL,0)},
    {W32FUN(WK32WowWaitForMsgAndEvent,      "WOWWaitForMsgAndEvent",       MOD_KERNEL,sizeof(WOWWAITFORMSGANDEVENT16))},
    {W32FUN((LPFNW32)WK32WowMsgBox,         "WOWMsgBox",                   MOD_KERNEL,sizeof(WOWMSGBOX16))},
    {W32FUN((LPFNW32)W32GetFlatAddressArray,"WowGetFlatAddressArray",      MOD_KERNEL,0)},
    {W32FUN(WK32GetCurrentDate,             "WOWGetCurrentDate",           MOD_KERNEL,0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                            MOD_KERNEL,0)},
    {W32FUN(WK32DeviceIOCTL,                "WOWDeviceIOCTL",              MOD_KERNEL,sizeof(WOWDEVICEIOCTL16))},
    {W32FUN(WK32FileSetAttributes,          "WOWFileSetAttributes",        MOD_KERNEL,sizeof(WOWFILESETATTRIBUTES16))},
    {W32FUN(WK32FileSetDateTime,            "WOWFileSetDateTime",          MOD_KERNEL,sizeof(WOWFILESETDATETIME16))},

  /*** 0270 ***/
    {W32FUN(WK32FileCreate,                 "WOWFileCreate",               MOD_KERNEL,sizeof(WOWFILECREATE16))},
    {W32FUN(WK32DosWowInit,                 "WOWDosWowInit",               MOD_KERNEL,sizeof(WOWDOSWOWINIT16))},
    {W32FUN(WK32CheckUserGdi,               "WOWCheckUserGdi",             MOD_KERNEL,sizeof(WOWCHECKUSERGDI16))},
    {W32FUN(WK32WOWPARTYBYNUMBER,           "WowPartyByNumber",            MOD_KERNEL,sizeof(WOWPARTYBYNUMBER16))},
    {W32FUN(WK32GetShortPathName,           "GetShortPathName",            MOD_KERNEL,sizeof(GETSHORTPATHNAME16))},
    {W32FUN(WK32FindAndReleaseDib,          "FindAndReleaseDib",           MOD_KERNEL,sizeof(FINDANDRELEASEDIB16))},
    {W32FUN(WK32WowReserveHtask,            "WowReserveHtask",             MOD_KERNEL,sizeof(WOWRESERVEHTASK16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},

  /*** 0280 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(WK32WOWInitTask,                "WOWInitTask",              MOD_KERNEL,   sizeof(WOWINITTASK16))},
    {W32FUN((LPFNW32)WK32KillTask,          "WOWKillTask",              MOD_KERNEL,   0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},

  /*** 0290 ***/
    {W32FUN(WK32FileWrite,                  "WOWFileWrite",                MOD_KERNEL,sizeof(FILEIOWRITE16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(WK32WowGetNextVdmCommand,       "WOWGetNextVDMCommand",        MOD_KERNEL,sizeof(WOWGETNEXTVDMCOMMAND16))},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},

  /*** 0300 ***/
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},
    {W32FUN(UNIMPLEMENTEDAPI,               "",                       MOD_KERNEL,     0)},

