//  patches to toolchain
// uncomment mthumb-interwork in gcc/config/t-arm-elf
// 	--disable-hosted-libstdcxx
// 	empty crt0.s

#ifndef _SYSTEM_
#define _SYSTEM_

#include "types.h"

#define VER_MAJOR 1
#define VER_MINIR 0
#define REV 41

#ifdef __cplusplus
extern "C"
{
#endif

    #include "75x_lib.h"

    //#include "usbstorage/usb_lib.h"
    //#include "usbstorage/card_io.h"

    #include "fatfs/ff.h"
    #include "fatfs/diskio.h"

    #include "crc16.h"
    #include "ps2scancodes.h"

    #include<stdio.h>
    #include<string.h>
    #include<time.h>

    //-------------------------------------------------------------------------

    void UART0_WriteText( const char *str );
    void FPGA_Config();
    void Spectrum_UpdateConfig();
    void Spectrum_UpdateDisks();

    //void AddMallocRecord( dword type, dword address, dword size );
    //void TestHeap();

    void WDT_Kick();

    void DelayUs( dword );
    void DelayMs( dword );

    #define CNTR_INTERVAL 10
    word get_ticks();
    void __TRACE( const char *str, ... );

    void portENTER_CRITICAL();
    void portEXIT_CRITICAL();

    void TIM0_UP_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#define PATH_SIZE 0x80

#ifdef __cplusplus
    #include "string.h"

    bool SystemBus_TestConfiguration();
    void SystemBus_SetAddress( dword address );
    word SystemBus_Read();
    word SystemBus_Read( dword address );
    void SystemBus_Write( word data );
    void SystemBus_Write( dword address, word data );

    bool ReadLine( FIL *file, CString &str );
    bool WriteText( FIL *file, const char *str );
    bool WriteLine( FIL *file, const char *str );

    const word fKeyRelease = ( 1 << 0 );

    const word fKeyShiftLeft = ( 1 << 2 );
    const word fKeyShiftRight = ( 1 << 3 );
    const word fKeyShift = fKeyShiftLeft | fKeyShiftRight;
    const word fKeyCtrlLeft = ( 1 << 4 );
    const word fKeyCtrlRight = ( 1 << 5 );
    const word fKeyCtrl = fKeyCtrlLeft | fKeyCtrlRight;
    const word fKeyAltLeft = ( 1 << 6 );
    const word fKeyAltRight = ( 1 << 7 );
    const word fKeyAlt = fKeyAltLeft | fKeyAltRight;

    const word fKeyJoy1 = ( 1 << 8 );
    const word fKeyJoy2 = ( 1 << 9 );

    bool ReadKey( word &key, word &flags );

    void Timer_Routine();
    dword Timer_GetTickCounter();

    //void MassStorage_Routine();

    void GetTime( tm *newTime );
    void SetTime( tm *newTime );

#endif

#endif

