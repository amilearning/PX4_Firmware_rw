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
#define CONFIG_ARCH_CORTEXM4 1
#define CONFIG_ARCH_FAMILY "armv7-m"
#define CONFIG_ARCH_CHIP "stm32"
#define CONFIG_ARCH_HAVE_FPU 1
#define CONFIG_ARCH_HAVE_LAZYFPU 1
#define CONFIG_ARCH_FPU 1
#define CONFIG_ARM_HAVE_MPU_UNIFIED 1
#define CONFIG_ARCH_HAVE_HARDFAULT_DEBUG 1
#define CONFIG_DEBUG_HARDFAULT_ALERT 1
#define CONFIG_ARCH_HAVE_MEMFAULT_DEBUG 1
#define CONFIG_ARMV7M_USEBASEPRI 1
#define CONFIG_ARMV7M_TOOLCHAIN_GNU_EABIL 1
#define CONFIG_ARMV7M_HAVE_STACKCHECK 1
#define CONFIG_ARCH_CHIP_STM32F427V 1
#define CONFIG_STM32_FLASH_CONFIG_I 1
#define CONFIG_STM32_STM32F4XXX 1
#define CONFIG_STM32_STM32F427 1
#define CONFIG_STM32_HAVE_CCM 1
#define CONFIG_STM32_HAVE_OTGFS 1
#define CONFIG_STM32_HAVE_FSMC 1
#define CONFIG_STM32_HAVE_IOCOMPENSATION 1
#define CONFIG_STM32_HAVE_USART3 1
#define CONFIG_STM32_HAVE_UART4 1
#define CONFIG_STM32_HAVE_UART5 1
#define CONFIG_STM32_HAVE_USART6 1
#define CONFIG_STM32_HAVE_UART7 1
#define CONFIG_STM32_HAVE_UART8 1
#define CONFIG_STM32_HAVE_TIM1 1
#define CONFIG_STM32_HAVE_TIM3 1
#define CONFIG_STM32_HAVE_TIM4 1
#define CONFIG_STM32_HAVE_TIM5 1
#define CONFIG_STM32_HAVE_TIM6 1
#define CONFIG_STM32_HAVE_TIM7 1
#define CONFIG_STM32_HAVE_TIM8 1
#define CONFIG_STM32_HAVE_TIM9 1
#define CONFIG_STM32_HAVE_TIM10 1
#define CONFIG_STM32_HAVE_TIM11 1
#define CONFIG_STM32_HAVE_TIM12 1
#define CONFIG_STM32_HAVE_TIM13 1
#define CONFIG_STM32_HAVE_TIM14 1
#define CONFIG_STM32_HAVE_ADC2 1
#define CONFIG_STM32_HAVE_ADC3 1
#define CONFIG_STM32_HAVE_ADC1_DMA 1
#define CONFIG_STM32_HAVE_CAN1 1
#define CONFIG_STM32_HAVE_CAN2 1
#define CONFIG_STM32_HAVE_DAC1 1
#define CONFIG_STM32_HAVE_RNG 1
#define CONFIG_STM32_HAVE_ETHMAC 1
#define CONFIG_STM32_HAVE_I2C2 1
#define CONFIG_STM32_HAVE_I2C3 1
#define CONFIG_STM32_HAVE_SPI2 1
#define CONFIG_STM32_HAVE_SPI3 1
#define CONFIG_STM32_HAVE_I2S3 1
#define CONFIG_STM32_HAVE_SPI4 1
#define CONFIG_STM32_HAVE_SPI5 1
#define CONFIG_STM32_HAVE_SPI6 1
#define CONFIG_STM32_HAVE_IP_DMA_V2 1
#define CONFIG_STM32_HAVE_IP_TIMERS_V1 1
#define CONFIG_STM32_HAVE_IP_ADC_V1 1
#define CONFIG_STM32_ADC1 1
#define CONFIG_STM32_BKPSRAM 1
#define CONFIG_STM32_CCMDATARAM 1
#define CONFIG_STM32_DMA1 1
#define CONFIG_STM32_DMA2 1
#define CONFIG_STM32_I2C1 1
#define CONFIG_STM32_I2C2 1
#define CONFIG_STM32_RTC 1
#define CONFIG_STM32_OTGFS 1
#define CONFIG_STM32_PWR 1
#define CONFIG_STM32_SDIO 1
#define CONFIG_STM32_SPI1 1
#define CONFIG_STM32_SPI2 1
#define CONFIG_STM32_SPI4 1
#define CONFIG_STM32_SYSCFG 1
#define CONFIG_STM32_TIM1 1
#define CONFIG_STM32_TIM3 1
#define CONFIG_STM32_TIM4 1
#define CONFIG_STM32_TIM9 1
#define CONFIG_STM32_TIM10 1
#define CONFIG_STM32_TIM11 1
#define CONFIG_STM32_USART1 1
#define CONFIG_STM32_USART2 1
#define CONFIG_STM32_USART3 1
#define CONFIG_STM32_UART4 1
#define CONFIG_STM32_USART6 1
#define CONFIG_STM32_UART7 1
#define CONFIG_STM32_UART8 1
#define CONFIG_STM32_WWDG 1
#define CONFIG_STM32_ADC 1
#define CONFIG_STM32_SPI 1
#define CONFIG_STM32_I2C 1
#define CONFIG_STM32_TIM 1
#define CONFIG_STM32_FLASH_PREFETCH 1
#define CONFIG_STM32_JTAG_SW_ENABLE 1
#define CONFIG_STM32_DISABLE_IDLE_SLEEP_DURING_DEBUG 1
#define CONFIG_STM32_DMACAPABLE 1
#define CONFIG_STM32_ADC1_RESOLUTION 0
#define CONFIG_STM32_ADC1_INJECTED_CHAN 0
#define CONFIG_STM32_USART 1
#define CONFIG_STM32_USART_RXDMA 1
#define CONFIG_STM32_SERIALDRIVER 1
#define CONFIG_STM32_USART1_SERIALDRIVER 1
#define CONFIG_USART1_RXDMA 1
#define CONFIG_STM32_USART2_SERIALDRIVER 1
#define CONFIG_USART2_RXDMA 1
#define CONFIG_STM32_USART3_SERIALDRIVER 1
#define CONFIG_USART3_RXDMA 1
#define CONFIG_STM32_UART4_SERIALDRIVER 1
#define CONFIG_UART4_RXDMA 1
#define CONFIG_STM32_USART6_SERIALDRIVER 1
#define CONFIG_USART6_RXDMA 1
#define CONFIG_STM32_UART7_SERIALDRIVER 1
#define CONFIG_UART7_RXDMA 1
#define CONFIG_STM32_UART8_SERIALDRIVER 1
#define CONFIG_UART8_RXDMA 1
#define CONFIG_STM32_SERIAL_RXDMA_BUFFER_SIZE 32
#define CONFIG_STM32_SERIAL_DISABLE_REORDERING 1
#define CONFIG_STM32_FLOWCONTROL_BROKEN 1
#define CONFIG_STM32_USART_BREAKS 1
#define CONFIG_STM32_SERIALBRK_BSDCOMPAT 1
#define CONFIG_STM32_USART_SINGLEWIRE 1
#define CONFIG_STM32_I2CTIMEOSEC 0
#define CONFIG_STM32_I2CTIMEOMS 10
#define CONFIG_STM32_I2CTIMEOTICKS 10
#define CONFIG_STM32_SDIO_CARD 1
#define CONFIG_STM32_SDIO_DMA 1
#define CONFIG_STM32_SDIO_DMAPRIO 0x00010000
#define CONFIG_STM32_BBSRAM 1
#define CONFIG_STM32_BBSRAM_FILES 5
#define CONFIG_STM32_SAVE_CRASHDUMP 1
#define CONFIG_STM32_RTC_MAGIC_REG 1
#define CONFIG_STM32_RTC_MAGIC 0xfacefeee
#define CONFIG_STM32_RTC_MAGIC_TIME_SET 0xfacefeef
#define CONFIG_STM32_RTC_HSECLOCK 1
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
#define CONFIG_BOARD_LOOPSPERMSEC 16717
#define CONFIG_ARCH_HAVE_INTERRUPTSTACK 1
#define CONFIG_ARCH_INTERRUPTSTACK 750
#define CONFIG_ARCH_HAVE_HIPRI_INTERRUPT 1
#define CONFIG_BOOT_RUNFROMFLASH 1
#define CONFIG_RAM_START 0x20000000
#define CONFIG_RAM_SIZE 262144
#define CONFIG_ARCH_BOARD_CUSTOM 1
#define CONFIG_ARCH_BOARD_CUSTOM_NAME "px4"
#define CONFIG_ARCH_BOARD_CUSTOM_DIR "../nuttx-config"
#define CONFIG_ARCH_BOARD_CUSTOM_DIR_RELPATH 1
#define CONFIG_BOARD_CRASHDUMP 1
#define CONFIG_LIB_BOARDCTL 1
#define CONFIG_BOARDCTL_RESET 1
#define CONFIG_BOARD_RESET_ON_ASSERT 2
#define CONFIG_BOARD_ASSERT_RESET_VALUE 0
#define CONFIG_BOARDCTL_USBDEVCTRL 1
#define CONFIG_ARCH_HAVE_TICKLESS 1
#define CONFIG_USEC_PER_TICK 1000
#define CONFIG_CLOCK_MONOTONIC 1
#define CONFIG_ARCH_HAVE_TIMEKEEPING 1
#define CONFIG_START_YEAR 2018
#define CONFIG_START_MONTH 11
#define CONFIG_START_DAY 30
#define CONFIG_MAX_WDOGPARMS 2
#define CONFIG_PREALLOC_WDOGS 50
#define CONFIG_WDOG_INTRESERVE 4
#define CONFIG_PREALLOC_TIMERS 50
#define CONFIG_INIT_ENTRYPOINT 1
#define CONFIG_USER_ENTRYPOINT nsh_main
#define CONFIG_USERMAIN_PRIORITY 100
#define CONFIG_RR_INTERVAL 0
#define CONFIG_TASK_NAME_SIZE 24
#define CONFIG_MAX_TASKS 32
#define CONFIG_SCHED_WAITPID 1
#define CONFIG_NPTHREAD_KEYS 4
#define CONFIG_PTHREAD_MUTEX_ROBUST 1
#define CONFIG_SCHED_SUSPENDSCHEDULER 1
#define CONFIG_SCHED_RESUMESCHEDULER 1
#define CONFIG_SCHED_INSTRUMENTATION 1
#define CONFIG_DEV_CONSOLE 1
#define CONFIG_FDCLONE_STDIO 1
#define CONFIG_SDCLONE_DISABLE 1
#define CONFIG_NFILE_DESCRIPTORS 54
#define CONFIG_NFILE_STREAMS 8
#define CONFIG_NAME_MAX 32
#define CONFIG_PRIORITY_INHERITANCE 1
#define CONFIG_SEM_PREALLOCHOLDERS 0
#define CONFIG_SEM_NNESTPRIO 8
#define CONFIG_SCHED_ATEXIT 1
#define CONFIG_SCHED_ATEXIT_MAX 1
#define CONFIG_SIG_DEFAULT 1
#define CONFIG_SIG_SIGUSR1_ACTION 1
#define CONFIG_SIG_SIGUSR2_ACTION 1
#define CONFIG_SIG_SIGALRM_ACTION 1
#define CONFIG_SIG_SIGSTOP_ACTION 1
#define CONFIG_SIG_SIGKILL_ACTION 1
#define CONFIG_SIG_SIGUSR1 1
#define CONFIG_SIG_SIGUSR2 2
#define CONFIG_SIG_SIGALRM 3
#define CONFIG_SIG_STOP 6
#define CONFIG_SIG_STP 7
#define CONFIG_SIG_CONT 8
#define CONFIG_SIG_KILL 9
#define CONFIG_SIG_INT 10
#define CONFIG_SIG_SIGCONDTIMEDOUT 16
#define CONFIG_SIG_SIGWORK 4
#define CONFIG_PREALLOC_MQ_MSGS 4
#define CONFIG_MQ_MAXMSGSIZE 32
#define CONFIG_SCHED_WORKQUEUE 1
#define CONFIG_SCHED_HPWORK 1
#define CONFIG_SCHED_HPNTHREADS 1
#define CONFIG_SCHED_HPWORKPRIORITY 249
#define CONFIG_SCHED_HPWORKSTACKSIZE 1800
#define CONFIG_SCHED_LPWORK 1
#define CONFIG_SCHED_LPNTHREADS 1
#define CONFIG_SCHED_LPWORKPRIORITY 50
#define CONFIG_SCHED_LPWORKPRIOMAX 176
#define CONFIG_SCHED_LPWORKSTACKSIZE 1800
#define CONFIG_IDLETHREAD_STACKSIZE 750
#define CONFIG_USERMAIN_STACKSIZE 2624
#define CONFIG_PTHREAD_STACK_MIN 512
#define CONFIG_PTHREAD_STACK_DEFAULT 2048
#define CONFIG_DEV_NULL 1
#define CONFIG_ARCH_HAVE_I2CRESET 1
#define CONFIG_I2C 1
#define CONFIG_I2C_RESET 1
#define CONFIG_ARCH_HAVE_SPI_BITORDER 1
#define CONFIG_SPI 1
#define CONFIG_SPI_EXCHANGE 1
#define CONFIG_RTC 1
#define CONFIG_RTC_DATETIME 1
#define CONFIG_WATCHDOG 1
#define CONFIG_WATCHDOG_DEVPATH "/dev/watchdog0"
#define CONFIG_ARCH_HAVE_SDIO 1
#define CONFIG_ARCH_HAVE_SDIOWAIT_WRCOMPLETE 1
#define CONFIG_ARCH_HAVE_SDIO_PREFLIGHT 1
#define CONFIG_MMCSD 1
#define CONFIG_MMCSD_NSLOTS 1
#define CONFIG_MMCSD_MULTIBLOCK_DISABLE 1
#define CONFIG_SDIO_DMA 1
#define CONFIG_MMCSD_SDIO 1
#define CONFIG_MMCSD_SDIOWAIT_WRCOMPLETE 1
#define CONFIG_SDIO_BLOCKSETUP 1
#define CONFIG_MTD 1
#define CONFIG_MTD_PARTITION 1
#define CONFIG_MTD_BYTE_WRITE 1
#define CONFIG_MTD_RAMTRON 1
#define CONFIG_RAMTRON_WRITEWAIT 1
#define CONFIG_RAMTRON_SETSPEED 1
#define CONFIG_PIPES 1
#define CONFIG_DEV_PIPE_MAXSIZE 1024
#define CONFIG_DEV_PIPE_SIZE 70
#define CONFIG_DEV_FIFO_SIZE 0
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_REMOVABLE 1
#define CONFIG_SERIAL_CONSOLE 1
#define CONFIG_MCU_SERIAL 1
#define CONFIG_STANDARD_SERIAL 1
#define CONFIG_SERIAL_NPOLLWAITERS 2
#define CONFIG_SERIAL_IFLOWCONTROL 1
#define CONFIG_SERIAL_OFLOWCONTROL 1
#define CONFIG_SERIAL_IFLOWCONTROL_WATERMARKS 1
#define CONFIG_SERIAL_IFLOWCONTROL_LOWER_WATERMARK 10
#define CONFIG_SERIAL_IFLOWCONTROL_UPPER_WATERMARK 90
#define CONFIG_ARCH_HAVE_SERIAL_TERMIOS 1
#define CONFIG_SERIAL_TERMIOS 1
#define CONFIG_UART7_SERIAL_CONSOLE 1
#define CONFIG_UART4_SERIALDRIVER 1
#define CONFIG_UART7_SERIALDRIVER 1
#define CONFIG_UART8_SERIALDRIVER 1
#define CONFIG_UART4_RXBUFSIZE 300
#define CONFIG_UART4_TXBUFSIZE 300
#define CONFIG_UART4_BAUD 57600
#define CONFIG_UART4_BITS 8
#define CONFIG_UART4_PARITY 0
#define CONFIG_UART4_2STOP 0
#define CONFIG_UART7_RXBUFSIZE 300
#define CONFIG_UART7_TXBUFSIZE 300
#define CONFIG_UART7_BAUD 57600
#define CONFIG_UART7_BITS 8
#define CONFIG_UART7_PARITY 0
#define CONFIG_UART7_2STOP 0
#define CONFIG_UART8_RXBUFSIZE 300
#define CONFIG_UART8_TXBUFSIZE 300
#define CONFIG_UART8_BAUD 57600
#define CONFIG_UART8_BITS 8
#define CONFIG_UART8_PARITY 0
#define CONFIG_UART8_2STOP 0
#define CONFIG_USART1_SERIALDRIVER 1
#define CONFIG_USART2_SERIALDRIVER 1
#define CONFIG_USART3_SERIALDRIVER 1
#define CONFIG_USART6_SERIALDRIVER 1
#define CONFIG_USART1_RXBUFSIZE 128
#define CONFIG_USART1_TXBUFSIZE 32
#define CONFIG_USART1_BAUD 115200
#define CONFIG_USART1_BITS 8
#define CONFIG_USART1_PARITY 0
#define CONFIG_USART1_2STOP 0
#define CONFIG_USART2_RXBUFSIZE 600
#define CONFIG_USART2_TXBUFSIZE 1100
#define CONFIG_USART2_BAUD 57600
#define CONFIG_USART2_BITS 8
#define CONFIG_USART2_PARITY 0
#define CONFIG_USART2_2STOP 0
#define CONFIG_USART2_IFLOWCONTROL 1
#define CONFIG_USART2_OFLOWCONTROL 1
#define CONFIG_USART3_RXBUFSIZE 300
#define CONFIG_USART3_TXBUFSIZE 600
#define CONFIG_USART3_BAUD 57600
#define CONFIG_USART3_BITS 8
#define CONFIG_USART3_PARITY 0
#define CONFIG_USART3_2STOP 0
#define CONFIG_USART3_IFLOWCONTROL 1
#define CONFIG_USART3_OFLOWCONTROL 1
#define CONFIG_USART6_RXBUFSIZE 300
#define CONFIG_USART6_TXBUFSIZE 300
#define CONFIG_USART6_BAUD 57600
#define CONFIG_USART6_BITS 8
#define CONFIG_USART6_PARITY 0
#define CONFIG_USART6_2STOP 0
#define CONFIG_USBDEV 1
#define CONFIG_USBDEV_BUSPOWERED 1
#define CONFIG_USBDEV_MAXPOWER 500
#define CONFIG_CDCACM 1
#define CONFIG_CDCACM_EP0MAXPACKET 64
#define CONFIG_CDCACM_EPINTIN 1
#define CONFIG_CDCACM_EPINTIN_FSSIZE 64
#define CONFIG_CDCACM_EPINTIN_HSSIZE 64
#define CONFIG_CDCACM_EPBULKOUT 3
#define CONFIG_CDCACM_EPBULKOUT_FSSIZE 64
#define CONFIG_CDCACM_EPBULKOUT_HSSIZE 512
#define CONFIG_CDCACM_EPBULKIN 2
#define CONFIG_CDCACM_EPBULKIN_FSSIZE 64
#define CONFIG_CDCACM_EPBULKIN_HSSIZE 512
#define CONFIG_CDCACM_NRDREQS 4
#define CONFIG_CDCACM_NWRREQS 4
#define CONFIG_CDCACM_BULKIN_REQLEN 96
#define CONFIG_CDCACM_RXBUFSIZE 600
#define CONFIG_CDCACM_TXBUFSIZE 2000
#define CONFIG_CDCACM_VENDORID 0x26ac
#define CONFIG_CDCACM_PRODUCTID 0x0011
#define CONFIG_CDCACM_VENDORSTR "3D Robotics"
#define CONFIG_CDCACM_PRODUCTSTR "PX4 FMU v2.x"
#define CONFIG_SYSLOG_WRITE 1
#define CONFIG_SYSLOG_SERIAL_CONSOLE 1
#define CONFIG_SYSLOG_CONSOLE 1
#define CONFIG_FS_READABLE 1
#define CONFIG_FS_WRITABLE 1
#define CONFIG_FS_MQUEUE_MPATH "/var/mqueue"
#define CONFIG_FS_FAT 1
#define CONFIG_FAT_LCNAMES 1
#define CONFIG_FAT_LFN 1
#define CONFIG_FAT_MAXFNAME 32
#define CONFIG_FAT_LFN_ALIAS_HASH 1
#define CONFIG_FAT_LFN_ALIAS_TRAILCHARS 0
#define CONFIG_FS_FATTIME 1
#define CONFIG_FAT_DMAMEMORY 1
#define CONFIG_FAT_DIRECT_RETRY 1
#define CONFIG_FS_ROMFS 1
#define CONFIG_FS_CROMFS 1
#define CONFIG_FS_BINFS 1
#define CONFIG_FS_PROCFS 1
#define CONFIG_FS_PROCFS_REGISTER 1
#define CONFIG_FS_PROCFS_EXCLUDE_ENVIRON 1
#define CONFIG_FS_PROCFS_EXCLUDE_BLOCKS 1
#define CONFIG_FS_PROCFS_EXCLUDE_MOUNT 1
#define CONFIG_FS_PROCFS_EXCLUDE_USAGE 1
#define CONFIG_FS_PROCFS_EXCLUDE_VERSION 1
#define CONFIG_FS_PROCFS_EXCLUDE_MOUNTS 1
#define CONFIG_FS_PROCFS_EXCLUDE_PARTITIONS 1
#define CONFIG_NXFONTS_DISABLE_1BPP 1
#define CONFIG_NXFONTS_DISABLE_2BPP 1
#define CONFIG_NXFONTS_DISABLE_4BPP 1
#define CONFIG_NXFONTS_DISABLE_8BPP 1
#define CONFIG_NXFONTS_DISABLE_16BPP 1
#define CONFIG_NXFONTS_DISABLE_24BPP 1
#define CONFIG_NXFONTS_DISABLE_32BPP 1
#define CONFIG_NXFONTS_PACKEDMSFIRST 1
#define CONFIG_MM_REGIONS 2
#define CONFIG_GRAN 1
#define CONFIG_GRAN_INTR 1
#define CONFIG_BUILTIN 1
#define CONFIG_STDIO_BUFFER_SIZE 32
#define CONFIG_STDIO_LINEBUFFER 1
#define CONFIG_NUNGET_CHARS 2
#define CONFIG_LIBC_FLOATINGPOINT 1
#define CONFIG_LIBC_LONG_LONG 1
#define CONFIG_EOL_IS_EITHER_CRLF 1
#define CONFIG_ARCH_LOWPUTC 1
#define CONFIG_LIBC_ARCH_MEMCPY 1
#define CONFIG_ARMV7M_MEMCPY 1
#define CONFIG_LIB_RAND_ORDER 1
#define CONFIG_LIB_HOMEDIR "/"
#define CONFIG_LIBC_TMPDIR "/tmp"
#define CONFIG_LIBC_MAX_TMPFILE 32
#define CONFIG_POSIX_SPAWN_PROXY_STACKSIZE 1024
#define CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE 2048
#define CONFIG_LIBC_STRERROR 1
#define CONFIG_MEMSET_OPTSPEED 1
#define CONFIG_MEMSET_64BIT 1
#define CONFIG_LIBC_LZF 1
#define CONFIG_LIBC_LZF_SMALL 1
#define CONFIG_LIBC_LZF_HLOG 13
#define CONFIG_LIBC_LZF_ALIGN 1
#define CONFIG_TIME_EXTENDED 1
#define CONFIG_ARCH_HAVE_TLS 1
#define CONFIG_LIB_SENDFILE_BUFSIZE 512
#define CONFIG_C99_BOOL8 1
#define CONFIG_HAVE_CXX 1
#define CONFIG_BUILTIN_PROXY_STACKSIZE 1024
#define CONFIG_FSUTILS_MKFATFS 1
#define CONFIG_NSH_LIBRARY 1
#define CONFIG_NSH_PROMPT_STRING "nsh> "
#define CONFIG_NSH_READLINE 1
#define CONFIG_NSH_LINELEN 128
#define CONFIG_NSH_QUOTE 1
#define CONFIG_NSH_CMDPARMS 1
#define CONFIG_NSH_MAXARGUMENTS 12
#define CONFIG_NSH_ARGCAT 1
#define CONFIG_NSH_NESTDEPTH 8
#define CONFIG_NSH_BUILTIN_APPS 1
#define CONFIG_NSH_DISABLE_BASENAME 1
#define CONFIG_NSH_DISABLE_CMP 1
#define CONFIG_NSH_DISABLE_DD 1
#define CONFIG_NSH_DISABLE_DIRNAME 1
#define CONFIG_NSH_DISABLE_HEXDUMP 1
#define CONFIG_NSH_DISABLE_IFCONFIG 1
#define CONFIG_NSH_DISABLE_IFUPDOWN 1
#define CONFIG_NSH_DISABLE_LOSETUP 1
#define CONFIG_NSH_DISABLE_LOSMART 1
#define CONFIG_NSH_DISABLE_MB 1
#define CONFIG_NSH_DISABLE_MKFIFO 1
#define CONFIG_NSH_DISABLE_MKRD 1
#define CONFIG_NSH_DISABLE_MH 1
#define CONFIG_NSH_DISABLE_PRINTF 1
#define CONFIG_NSH_DISABLE_PSSTACKUSAGE 1
#define CONFIG_NSH_DISABLE_PUT 1
#define CONFIG_NSH_DISABLE_REBOOT 1
#define CONFIG_NSH_DISABLE_SHUTDOWN 1
#define CONFIG_NSH_DISABLE_TELNETD 1
#define CONFIG_NSH_DISABLE_TRUNCATE 1
#define CONFIG_NSH_DISABLE_UNAME 1
#define CONFIG_NSH_DISABLE_WGET 1
#define CONFIG_NSH_DISABLE_XD 1
#define CONFIG_NSH_MMCSDMINOR 0
#define CONFIG_NSH_MMCSDSLOTNO 0
#define CONFIG_NSH_VARS 1
#define CONFIG_NSH_CODECS_BUFSIZE 128
#define CONFIG_NSH_PROC_MOUNTPOINT "/proc"
#define CONFIG_NSH_FILEIOSIZE 512
#define CONFIG_NSH_STRERROR 1
#define CONFIG_NSH_ROMFSETC 1
#define CONFIG_NSH_CROMFSETC 1
#define CONFIG_NSH_ROMFSMOUNTPT "/etc"
#define CONFIG_NSH_INITSCRIPT "init.d/rcS"
#define CONFIG_NSH_ROMFSDEVNO 0
#define CONFIG_NSH_ROMFSSECTSIZE 128
#define CONFIG_NSH_ARCHROMFS 1
#define CONFIG_NSH_FATDEVNO 1
#define CONFIG_NSH_FATSECTSIZE 512
#define CONFIG_NSH_FATNSECTORS 1024
#define CONFIG_NSH_FATMOUNTPT "/tmp"
#define CONFIG_NSH_CONSOLE 1
#define CONFIG_NSH_ARCHINIT 1
#define CONFIG_HAVE_CXXINITIALIZE 1
#define CONFIG_SYSTEM_CDCACM 1
#define CONFIG_SYSTEM_CDCACM_DEVMINOR 0
#define CONFIG_SYSTEM_NSH 1
#define CONFIG_SYSTEM_NSH_PRIORITY 100
#define CONFIG_SYSTEM_NSH_STACKSIZE 2048
#define CONFIG_READLINE_HAVE_EXTMATCH 1
#define CONFIG_SYSTEM_READLINE 1
#define CONFIG_READLINE_ECHO 1

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
