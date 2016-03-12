#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0*",

    // sdcard
    "/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1",
    "/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:aaaa",
    "/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:aaaa/block/mmcblk1",
    "/sys/devices/soc.0/f98a4900.sdhci/mmc_host/mmc1/mmc1:aaaa/block/mmcblk1*",
    "/sys/block/mmcblk1",

    "/sys/devices/soc.0/f9200000.ssusb/f9200000.dwc3/xhci-hcd.0.auto*",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // input
    "/sys/devices/soc.0/gpio_keys.89/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc.0/f9924000.i2c/i2c-2/2-0020/input*",

    // adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/bus/usb",

    // Encryption
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/qseecom/qseecom",

    // exfat requires fuse device
    "/sys/devices/virtual/misc/fuse",

    NULL
};
