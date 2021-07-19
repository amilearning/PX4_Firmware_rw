/* config.h -- Autogenerated! Do not edit. */

#ifndef __INCLUDE_NUTTX_CONFIG_H
#define __INCLUDE_NUTTX_CONFIG_H

/* General Definitions ***********************************/
/* Used to represent the values of tristate options */

#define CONFIG_y 1
#define CONFIG_m 2

/* Architecture-specific options *************************/

#define CONFIG_DEFAULT_SMALL 1
#define CONFIG_HOST_LINUX 1
#define CONFIG_APPS_DIR "../apps"
#define CONFIG_BUILD_FLAT 1
#define CONFIG_RAW_BINARY 1
#define CONFIG_ARCH_MATH_H 1
#define CONFIG_DEBUG_ALERT 1
#define CONFIG_ARCH_HAVE_STACKCHECK 1
#define CONFIG_STACK_COLORATION 1
#define CONFIG_ARCH_HAVE_HEAPCHECK 1
#define CONFIG_DEBUG_SYMBOLS 1
#define CONFIG_ARCH_HAVE_CUSTOMOPT 1
#define CONFIG_DEBUG_FULLOPT 1
#define CONFIG_ARCH_ARM 1
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_CHIP_STM32 1
#define CONFIG_ARCH_CORTEXM3 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "stm32"
#define CONFIG_ARCH_HAVE_LAZYFPU 1
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARCH_HAVE_HARDFAULT_DEBUG 1
#define CONFIG_ARCH_HAVE_MEMFAULT_DEBUG 1
#define CONFIG_ARMV7M_USEBASEPRI 1
#define CONFIG_ARMV7M_TOOLCHAIN_GNU_EABIL 1
#define CONFIG_ARMV7M_HAVE_STACKCHECK 1
#define CONFIG_ARCH_CHIP_STM32F100C8 1
#define CONFIG_STM32_FLASH_CONFIG_DEFAULT 1
#define CONFIG_STM32_STM32F10XX 1
#define CONFIG_STM32_VALUELINE 1
#define CONFIG_STM32_MEDIUMDENSITY 1
#define CONFIG_STM32_HAVE_USART3 1
#define CONFIG_STM32_HAVE_UART4 1
#define CONFIG_STM32_HAVE_UART5 1
#define CONFIG_STM32_HAVE_TIM1 1
#define CONFIG_STM32_HAVE_TIM3 1
#define CONFIG_STM32_HAVE_TIM4 1
#define CONFIG_STM32_HAVE_TIM5 1
#define CONFIG_STM32_HAVE_TIM6 1
#define CONFIG_STM32_HAVE_TIM7 1
#define CONFIG_STM32_HAVE_TIM8 1
#define CONFIG_STM32_HAVE_TIM12 1
#define CONFIG_STM32_HAVE_TIM13 1
#define CONFIG_STM32_HAVE_TIM14 1
#define CONFIG_STM32_HAVE_TIM15 1
#define CONFIG_STM32_HAVE_TIM16 1
#define CONFIG_STM32_HAVE_TIM17 1
#define CONFIG_STM32_HAVE_ADC2 1
#define CONFIG_STM32_HAVE_ADC3 1
#define CONFIG_STM32_HAVE_ADC1_DMA 1
#define CONFIG_STM32_HAVE_CAN1 1
#define CONFIG_STM32_HAVE_DAC1 1
#define CONFIG_STM32_HAVE_I2C2 1
#define CONFIG_STM32_HAVE_SPI2 1
#define CONFIG_STM32_HAVE_SPI3 1
#define CONFIG_STM32_HAVE_IP_DMA_V1 1
#define CONFIG_STM32_HAVE_IP_TIMERS_V1 1
#define CONFIG_STM32_HAVE_IP_ADC_V1 1
#define CONFIG_STM32_HAVE_IP_ADC_V1_BASIC 1
#define CONFIG_STM32_ADC1 1
#define CONFIG_STM32_DMA1 1
#define CONFIG_STM32_I2C1 1
#define CONFIG_STM32_USART1 1
#define CONFIG_STM32_USART2 1
#define CONFIG_STM32_USART3 1
#define CONFIG_STM32_ADC 1
#define CONFIG_STM32_I2C 1
#define CONFIG_STM32_USART3_NO_REMAP 1
#define CONFIG_STM32_JTAG_SW_ENABLE 1
#define CONFIG_STM32_DISABLE_IDLE_SLEEP_DURING_DEBUG 1
#define CONFIG_STM32_ADC1_INJECTED_CHAN 0
#define CONFIG_STM32_USART 1
#define CONFIG_STM32_USART_RXDMA 1
#define CONFIG_STM32_SERIALDRIVER 1
#define CONFIG_STM32_USART1_SERIALDRIVER 1
#define CONFIG_USART1_RXDMA 1
#define CONFIG_STM32_USART2_SERIALDRIVER 1
#define CONFIG_STM32_USART3_SERIALDRIVER 1
#define CONFIG_USART3_RXDMA 1
#define CONFIG_STM32_SERIAL_RXDMA_BUFFER_SIZE 32
#define CONFIG_STM32_USART_SINGLEWIRE 1
#define CONFIG_STM32_I2CTIMEOSEC 0
#define CONFIG_STM32_I2CTIMEOMS 1
#define CONFIG_STM32_I2CTIMEOTICKS 1
#define CONFIG_STM32_HAVE_RTC_COUNTER 1
#define CONFIG_ARCH_TOOLCHAIN_GNU 1
#define CONFIG_ARCH_HAVE_IRQTRIGGER 1
#define CONFIG_ARCH_DMA 1
#define CONFIG_ARCH_HAVE_IRQPRIO 1
#define CONFIG_ARCH_HAVE_VFORK 1
#define CONFIG_ARCH_HAVE_MPU 1
#define CONFIG_ARCH_HAVE_PROGMEM 1
#define CONFIG_ARCH_HAVE_RESET 1
#define CONFIG_ARCH_HAVE_FETCHADD 1
#define CONFIG_ARCH_STACKDUMP 1
#define CONFIG_ARCH_HAVE_RAMVECTORS 1
#define CONFIG_BOARD_LOOPSPERMSEC 2000
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 0
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMFLASH 1
#define CONFIG_RAM_START 0x20000000
#define CONFIG_RAM_SIZE 8192
#define CONFIG_ARCH_BOARD_CUSTOM 1
#define CONFIG_ARCH_BOARD_CUSTOM_NAME "px4"
#define CONFIG_ARCH_BOARD_CUSTOM_DIR "../nuttx-config"
#define CONFIG_ARCH_BOARD_CUSTOM_DIR_RELPATH 1
#define CONFIG_LIB_BOARDCTL 1
#define CONFIG_DISABLE_OS_API 1
#define CONFIG_DISABLE_POSIX_TIMERS 1
#define CONFIG_DISABLE_PTHREAD 1
#define CONFIG_DISABLE_SIGNALS 1
#define CONFIG_DISABLE_MQUEUE 1
#define CONFIG_DISABLE_ENVIRON 1
#define CONFIG_ARCH_HAVE_TICKLESS 1
#define CONFIG_USEC_PER_TICK 1000
#define CONFIG_ARCH_HAVE_TIMEKEEPING 1
#define CONFIG_START_YEAR 2018
#define CONFIG_START_MONTH 11
#define CONFIG_START_DAY 30
#define CONFIG_MAX_WDOGPARMS 2
#define CONFIG_PREALLOC_WDOGS 6
#define CONFIG_WDOG_INTRESERVE 2
#define CONFIG_PREALLOC_TIMERS 0
#define CONFIG_INIT_ENTRYPOINT 1
#define CONFIG_USER_ENTRYPOINT user_start
#define CONFIG_USERMAIN_PRIORITY 100
#define CONFIG_RR_INTERVAL 0
#define CONFIG_TASK_NAME_SIZE 4
#define CONFIG_MAX_TASKS 2
#define CONFIG_NPTHREAD_KEYS 0
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_FDCLONE_DISABLE 1
#define CONFIG_FDCLONE_STDIO 1
#define CONFIG_SDCLONE_DISABLE 1
#define CONFIG_NFILE_DESCRIPTORS 8
#define CONFIG_NFILE_STREAMS 0
#define CONFIG_NAME_MAX 12
#define CONFIG_IDLETHREAD_STACKSIZE 1024
#define CONFIG_USERMAIN_STACKSIZE 1300
#define CONFIG_PTHREAD_STACK_MIN 512
#define CONFIG_PTHREAD_STACK_DEFAULT 1024
#define CONFIG_DISABLE_POLL 1
#define CONFIG_ARCH_HAVE_I2CRESET 1
#define CONFIG_ARCH_HAVE_SPI_BITORDER 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_STANDARD_SERIAL 1
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_USART1_SERIAL_CONSOLE 1
#define CONFIG_USART1_SERIALDRIVER 1
#define CONFIG_USART2_SERIALDRIVER 1
#define CONFIG_USART3_SERIALDRIVER 1
#define CONFIG_USART1_RXBUFSIZE 64
#define CONFIG_USART1_TXBUFSIZE 40
#define CONFIG_USART1_BAUD 115200
#define CONFIG_USART1_BITS 8
#define CONFIG_USART1_PARITY 0
#define CONFIG_USART1_2STOP 0
#define CONFIG_USART2_RXBUFSIZE 64
#define CONFIG_USART2_TXBUFSIZE 64
#define CONFIG_USART2_BAUD 115200
#define CONFIG_USART2_BITS 8
#define CONFIG_USART2_PARITY 0
#define CONFIG_USART2_2STOP 0
#define CONFIG_USART3_RXBUFSIZE 64
#define CONFIG_USART3_TXBUFSIZE 64
#define CONFIG_USART3_BAUD 115200
#define CONFIG_USART3_BITS 8
#define CONFIG_USART3_PARITY 0
#define CONFIG_USART3_2STOP 0
#define CONFIG_SYSLOG_WRITE 1
#define CONFIG_SYSLOG_SERIAL_CONSOLE 1
#define CONFIG_SYSLOG_CONSOLE 1
#define CONFIG_DISABLE_MOUNTPOINT 1
#define CONFIG_DISABLE_PSEUDOFS_OPERATIONS 1
#define CONFIG_NXFONTS_PACKEDMSFIRST 1
#define CONFIG_MM_SMALL 1
#define CONFIG_MM_REGIONS 1
#define CONFIG_MM_FILL_ALLOCATIONS 1
#define CONFIG_STDIO_DISABLE_BUFFERING 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_EOL_IS_EITHER_CRLF 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIBC_ARCH_MEMCPY 1
#define CONFIG_ARMV7M_MEMCPY 1
#define CONFIG_LIB_RAND_ORDER 1
#define CONFIG_POSIX_SPAWN_PROXY_STACKSIZE 1024
#define CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE 1024
#define CONFIG_ARCH_HAVE_TLS 1
#define CONFIG_LIB_SENDFILE_BUFSIZE 512
#define CONFIG_C99_BOOL8 1
#define CONFIG_HAVE_CXX 1
#define CONFIG_HAVE_CXXINITIALIZE 1

/* Sanity Checks *****************************************/

/* If this is an NXFLAT, external build, then make sure that
 * NXFLAT support is enabled in the base code.
 */

#if defined(__NXFLAT__) && !defined(CONFIG_NXFLAT)
# error "NXFLAT support not enabled in this configuration"
#endif

/* NXFLAT requires PIC support in the TCBs. */

#if defined(CONFIG_NXFLAT)
#  undef  CONFIG_PIC
#  define CONFIG_PIC 1
#endif

/* Binary format support is disabled if no binary formats are
 * configured (at present, NXFLAT is the only supported binary.
 * format).
 */

#if !defined(CONFIG_NXFLAT) && !defined(CONFIG_ELF) && !defined(CONFIG_BUILTIN)
#  undef CONFIG_BINFMT_DISABLE
#  define CONFIG_BINFMT_DISABLE 1
#endif

/* The correct way to disable RR scheduling is to set the
 * timeslice to zero.
 */

#ifndef CONFIG_RR_INTERVAL
#  define CONFIG_RR_INTERVAL 0
#endif

/* The correct way to disable filesystem support is to set the number of
 * file descriptors to zero.
 */

#ifndef CONFIG_NFILE_DESCRIPTORS
#  define CONFIG_NFILE_DESCRIPTORS 0
#endif

/* If no file descriptors are configured, then make certain no streams
 * are configured either.
 */

#if CONFIG_NFILE_DESCRIPTORS == 0
#  undef  CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* The correct way to disable stream support is to set the number of
 * streamd to zero.
 */

#ifndef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 0
#endif

/* If a console is selected, then make sure that there are resources for
 * three file descriptors and, if any streams are selected, also for three
 * file streams.
 *
 * CONFIG_DEV_CONSOLE means that a builtin console device exists at /dev/console
 * and can be opened during boot-up.  Other consoles, such as USB consoles, may
 * not exist at boot-upand have to be handled in a different way.  Three file
 * descriptors and three file streams are still needed.
 */

#if defined(CONFIG_DEV_CONSOLE) || defined(CONFIG_CDCACM_CONSOLE) || \
    defined(CONFIG_PL2303_CONSOLE)
# if CONFIG_NFILE_DESCRIPTORS < 3
#   undef CONFIG_NFILE_DESCRIPTORS
#   define CONFIG_NFILE_DESCRIPTORS 3
# endif

# if CONFIG_NFILE_STREAMS > 0 && CONFIG_NFILE_STREAMS < 3
#  undef CONFIG_NFILE_STREAMS
#  define CONFIG_NFILE_STREAMS 3
# endif

/* If no console is selected, then disable all builtin console devices */

#else
#  undef CONFIG_DEV_LOWCONSOLE
#  undef CONFIG_RAMLOG_CONSOLE
#endif

/* If no file streams are configured, then make certain that buffered I/O
 * support is disabled
 */

#if CONFIG_NFILE_STREAMS == 0
#  undef  CONFIG_STDIO_BUFFER_SIZE
#  undef  CONFIG_STDIO_LINEBUFFER
#  undef  CONFIG_STDIO_DISABLE_BUFFERING
#  define CONFIG_STDIO_DISABLE_BUFFERING 1
#endif

/* If priority inheritance is disabled, then do not allocate any
 * associated resources.
 */

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_PREALLOCHOLDERS)
#  undef CONFIG_SEM_PREALLOCHOLDERS
#  define CONFIG_SEM_PREALLOCHOLDERS 0
#endif

#if !defined(CONFIG_PRIORITY_INHERITANCE) || !defined(CONFIG_SEM_NNESTPRIO)
#  undef  CONFIG_SEM_NNESTPRIO
#  define CONFIG_SEM_NNESTPRIO 0
#endif

/* If the end of RAM is not specified then it is assumed to be the beginning
 * of RAM plus the RAM size.
 */

#ifndef CONFIG_RAM_END
#  define CONFIG_RAM_END (CONFIG_RAM_START+CONFIG_RAM_SIZE)
#endif

#ifndef CONFIG_RAM_VEND
#  define CONFIG_RAM_VEND (CONFIG_RAM_VSTART+CONFIG_RAM_SIZE)
#endif

/* If the end of FLASH is not specified then it is assumed to be the beginning
 * of FLASH plus the FLASH size.
 */

#ifndef CONFIG_FLASH_END
#  define CONFIG_FLASH_END (CONFIG_FLASH_START+CONFIG_FLASH_SIZE)
#endif

/* If the maximum message size is zero, then we assume that message queues
 * support should be disabled
 */

#if !defined(CONFIG_MQ_MAXMSGSIZE) || defined(CONFIG_DISABLE_MQUEUE)
#  undef CONFIG_MQ_MAXMSGSIZE
#  define CONFIG_MQ_MAXMSGSIZE 0
#endif

#if CONFIG_MQ_MAXMSGSIZE <= 0 && !defined(CONFIG_DISABLE_MQUEUE)
#  define CONFIG_DISABLE_MQUEUE 1
#endif

/* The correct way to disable socket support is to set the number of
 * socket descriptors to zero.
 */

#ifndef CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

/* There can be no network support with no socket descriptors */

#if CONFIG_NSOCKET_DESCRIPTORS <= 0
#  undef CONFIG_NET
#endif

/* Conversely, if there is no network support, there is no need for
 * socket descriptors
 */

#ifndef CONFIG_NET
#  undef  CONFIG_NSOCKET_DESCRIPTORS
#  define CONFIG_NSOCKET_DESCRIPTORS 0
#endif

#endif /* __INCLUDE_NUTTX_CONFIG_H */
