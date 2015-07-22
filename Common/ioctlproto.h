#ifndef _COMMON_IOCTL_
#define _COMMON_IOCTL_

#include <devioctl.h>

#define FILE_NAME               L"\\\\.\\KbdFilter"
#define SYMBOL_LINK             L"\\DosDevices\\KbdFilter"

#define IOCTL_GETHOTKEYINDEX    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_CLEANUP           CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_INITEVENT         CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SETHOTKEYLIST     CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_CLEARLIST         CTL_CODE(FILE_DEVICE_UNKNOWN, 0x806, METHOD_BUFFERED, FILE_ANY_ACCESS)

typedef unsigned int    UINT;

typedef struct _IOCTL_INPUTDATA {
    UINT    fsModifiers;
    UINT    nMakeCode;
} IOCTL_INPUTDATA, *PIOCTL_INPUTDATA;

typedef struct _HOTKEY_CFG {
    ULONG               ulItemCount;
    IOCTL_INPUTDATA     CfgItem[1];
} HOTKEY_CFG, *PHOTKEY_CFG;

#endif  /* _COMMON_IOCTL_ */