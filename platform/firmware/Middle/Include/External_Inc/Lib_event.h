#ifndef _M_EVENT_H
#define _M_EVENT_H
#include <fwl_vme.h>
#define MAX_EVENTQUEUE_ENTRIES 20

  #define M_EVT_1 (VME_EVT_USER + 1)
  #define M_EVT_10 (VME_EVT_USER + 2)
  #define M_EVT_11 (VME_EVT_USER + 3)
  #define M_EVT_12 (VME_EVT_USER + 4)
  #define M_EVT_2 (VME_EVT_USER + 5)
  #define M_EVT_3 (VME_EVT_USER + 6)
  #define M_EVT_4 (VME_EVT_USER + 7)
  #define M_EVT_5 (VME_EVT_USER + 8)
  #define M_EVT_6 (VME_EVT_USER + 9)
  #define M_EVT_7 (VME_EVT_USER + 10)
  #define M_EVT_8 (VME_EVT_USER + 11)
  #define M_EVT_9 (VME_EVT_USER + 12)
  #define M_EVT_ALARM (VME_EVT_USER + 13)
  #define M_EVT_AUDIO_ABPLAY (VME_EVT_USER + 14)
  #define M_EVT_AUDIO_RECORD_STOP (VME_EVT_USER + 15)
  #define M_EVT_AUDIO_STOP (VME_EVT_USER + 16)
  #define M_EVT_CALIBRATE_END (VME_EVT_USER + 17)
  #define M_EVT_CAM_FAILURE (VME_EVT_USER + 18)
  #define M_EVT_CLIP (VME_EVT_USER + 19)
  #define M_EVT_CURPLAY (VME_EVT_USER + 20)
  #define M_EVT_DELETE_FOLDER (VME_EVT_USER + 21)
  #define M_EVT_DEL_EXIT (VME_EVT_USER + 22)
  #define M_EVT_DISPLAY_SWITCH (VME_EVT_USER + 23)
  #define M_EVT_EMPTY_MESSAGE (VME_EVT_USER + 24)
  #define M_EVT_EXIT (VME_EVT_USER + 25)
  #define M_EVT_FAVORITE (VME_EVT_USER + 26)
  #define M_EVT_FETCH_SONG (VME_EVT_USER + 27)
  #define M_EVT_FLIP_OFF (VME_EVT_USER + 28)
  #define M_EVT_FLIP_ON (VME_EVT_USER + 29)
  #define M_EVT_HEADSET_KEY (VME_EVT_USER + 30)
  #define M_EVT_LIST (VME_EVT_USER + 31)
  #define M_EVT_MENU (VME_EVT_USER + 32)
  #define M_EVT_MESSAGE (VME_EVT_USER + 33)
  #define M_EVT_MULTI_SHOW (VME_EVT_USER + 34)
  #define M_EVT_NETWORK (VME_EVT_USER + 35)
  #define M_EVT_NETWORK_REG_CHANGED (VME_EVT_USER + 36)
  #define M_EVT_NETWORK_TRANS (VME_EVT_USER + 37)
  #define M_EVT_NEXT (VME_EVT_USER + 38)
  #define M_EVT_PASTE_EXIT (VME_EVT_USER + 39)
  #define M_EVT_PASTE_FILE (VME_EVT_USER + 40)
  #define M_EVT_PASTE_FOLDER (VME_EVT_USER + 41)
  #define M_EVT_PRE_EXIT (VME_EVT_USER + 42)
  #define M_EVT_PRE_TIME (VME_EVT_USER + 43)
  #define M_EVT_PUB_TIMER (VME_EVT_USER + 44)
  #define M_EVT_REPEAT_MODE (VME_EVT_USER + 45)
  #define M_EVT_RETURN (VME_EVT_USER + 46)
  #define M_EVT_RETURN10 (VME_EVT_USER + 47)
  #define M_EVT_RETURN2 (VME_EVT_USER + 48)
  #define M_EVT_RETURN3 (VME_EVT_USER + 49)
  #define M_EVT_RETURN4 (VME_EVT_USER + 50)
  #define M_EVT_RETURN5 (VME_EVT_USER + 51)
  #define M_EVT_RETURN6 (VME_EVT_USER + 52)
  #define M_EVT_RETURN7 (VME_EVT_USER + 53)
  #define M_EVT_RETURN8 (VME_EVT_USER + 54)
  #define M_EVT_RETURN9 (VME_EVT_USER + 55)
  #define M_EVT_RING_OFF (VME_EVT_USER + 56)
  #define M_EVT_RING_ON (VME_EVT_USER + 57)
  #define M_EVT_RTC (VME_EVT_USER + 58)
  #define M_EVT_SCC_COMMAND_FAILED (VME_EVT_USER + 59)
  #define M_EVT_SCC_COMMAND_OK (VME_EVT_USER + 60)
  #define M_EVT_SCC_ESTABLISHED (VME_EVT_USER + 61)
  #define M_EVT_SCC_HANGUP (VME_EVT_USER + 62)
  #define M_EVT_SCC_INCOMING (VME_EVT_USER + 63)
  #define M_EVT_SCC_RING (VME_EVT_USER + 64)
  #define M_EVT_SCC_STATE_CHANGED (VME_EVT_USER + 65)
  #define M_EVT_SDCARD_PLUG (VME_EVT_USER + 66)
  #define M_EVT_SDCB_MESSAGE (VME_EVT_USER + 67)
  #define M_EVT_SDIO_DETECT (VME_EVT_USER + 68)
  #define M_EVT_SDMMC_DETECT (VME_EVT_USER + 69)
  #define M_EVT_SD_FORMAT (VME_EVT_USER + 70)
  #define M_EVT_SD_MOUNT_STATE (VME_EVT_USER + 71)
  #define M_EVT_SETPATH (VME_EVT_USER + 72)
  #define M_EVT_SET_SPEED (VME_EVT_USER + 73)
  #define M_EVT_SHOT_SHOW (VME_EVT_USER + 74)
  #define M_EVT_SMS_CMT (VME_EVT_USER + 75)
  #define M_EVT_SMS_CMTI (VME_EVT_USER + 76)
  #define M_EVT_TIMER (VME_EVT_USER + 77)
  #define M_EVT_TONE_MODE (VME_EVT_USER + 78)
  #define M_EVT_TOUCH_SCREEN (VME_EVT_USER + 79)
  #define M_EVT_TSCR_CALIBRATE (VME_EVT_USER + 80)
  #define M_EVT_UPDATE (VME_EVT_USER + 81)
  #define M_EVT_USBHOST (VME_EVT_USER + 82)
  #define M_EVT_USBHOST_EXIT (VME_EVT_USER + 83)
  #define M_EVT_USB_CAMERA (VME_EVT_USER + 84)
  #define M_EVT_USB_DETECT (VME_EVT_USER + 85)
  #define M_EVT_USB_EXIT (VME_EVT_USER + 86)
  #define M_EVT_USB_IN (VME_EVT_USER + 87)
  #define M_EVT_USB_OUT (VME_EVT_USER + 88)
  #define M_EVT_USER_KEY (VME_EVT_USER + 89)
  #define M_EVT_VIDEO_RECORD_STOP (VME_EVT_USER + 90)
  #define M_EVT_VOLTAGE (VME_EVT_USER + 91)
  #define M_EVT_WAKE_SAVER (VME_EVT_USER + 92)
  #define M_EVT_WATCHDOG_TEST (VME_EVT_USER + 93)
  #define M_EVT_Z05COM_MSG (VME_EVT_USER + 94)
  #define M_EVT_Z06COM_SCREEN_SAVER (VME_EVT_USER + 95)
  #define M_EVT_Z06_STOPRECORD (VME_EVT_USER + 96)
  #define M_EVT_Z09COM_SYS_RESET (VME_EVT_USER + 97)
  #define M_EVT_Z99COM_DELFILE (VME_EVT_USER + 98)
  #define M_EVT_Z99COM_POWEROFF (VME_EVT_USER + 99)
#endif