# First part of the kernel trimdown efforts for the telltale use case.
# This config file amendement removes all module type config options inherited from the AGL default config that are not loaded during execution of the demo
# CONFIG_SERIAL_8250_DW is not set
# CONFIG_X86_ACPI_CPUFREQ is not set
# CONFIG_JOYSTICK_ADI is not set
# CONFIG_CRYPTO_ARC4 is not set
# CONFIG_ATA_GENERIC is not set
# CONFIG_ATA_PIIX is not set
# CONFIG_DRM_BOCHS is not set
# CONFIG_BTRFS_FS is not set
# CONFIG_CIFS is not set
# CONFIG_NET_CLS_BASIC is not set
# CONFIG_NET_CLS_CGROUP is not set
# CONFIG_NET_CLS_U32 is not set
# CONFIG_CONNECTOR is not set
# CONFIG_IKCONFIG is not set
# CONFIG_USB_SERIAL_CP210X is not set
# CONFIG_X86_CPUID is not set
# CONFIG_CRYPTO_DEFLATE is not set
# CONFIG_DM_CRYPT is not set
# CONFIG_DM_MIRROR is not set
# CONFIG_BLK_DEV_DM is not set
# CONFIG_DM_SNAPSHOT is not set
# CONFIG_DM_ZERO is not set
# CONFIG_BLK_DEV_MD is not set
# CONFIG_BLK_DEV_RAM is not set
# CONFIG_E100 is not set
# CONFIG_E1000 is not set
# CONFIG_E1000E is not set
# CONFIG_EFIVAR_FS is not set
# CONFIG_USB_EZUSB_FX2 is not set
# CONFIG_MD_FAULTY is not set
# CONFIG_HID_LOGITECH is not set
# CONFIG_HID_LOGITECH_HIDPP is not set
# CONFIG_HID_MULTITOUCH is not set
# CONFIG_I2C_TINY_USB is not set
# CONFIG_BLK_DEV_IDECD is not set
# CONFIG_IDE is not set
# CONFIG_IGB is not set
# CONFIG_IIO_BUFFER_CB is not set
# CONFIG_MFD_INTEL_LPSS_ACPI is not set
# CONFIG_MFD_INTEL_LPSS_PCI is not set
# CONFIG_ISO9660_FS is not set
# CONFIG_INPUT_JOYDEV is not set
# CONFIG_IIO_KFIFO_BUF is not set
# CONFIG_LEDS_BLINKM is not set
# CONFIG_MD_LINEAR is not set
# CONFIG_BLK_DEV_LOOP is not set
# CONFIG_MMC is not set
# CONFIG_FUSION_SPI is not set
# CONFIG_MSDOS_FS is not set
# CONFIG_X86_MSR is not set
# CONFIG_MD_MULTIPATH is not set
# CONFIG_NETCONSOLE is not set
# CONFIG_NFS_FS is not set
# CONFIG_NFS_V4 is not set
# CONFIG_NLS_CODEPAGE_437 is not set
# CONFIG_NLS_ISO8859_1 is not set
# CONFIG_BLK_DEV_NVME is not set
# CONFIG_USB_OHCI_HCD is not set
# CONFIG_OVERLAY_FS is not set
# CONFIG_PATA_SCH is not set
# CONFIG_BLK_DEV_PIIX is not set
# CONFIG_USB_SERIAL_PL2303 is not set
# CONFIG_R8169 is not set
# CONFIG_MD_RAID0 is not set
# CONFIG_MD_RAID1 is not set
# CONFIG_MD_RAID10 is not set
# CONFIG_MD_RAID456 is not set
# CONFIG_BLK_DEV_SD is not set
# CONFIG_MMC_SDHCI is not set
# CONFIG_MMC_SDHCI_ACPI is not set
# CONFIG_MMC_SDHCI_PCI is not set
# CONFIG_MMC_SDHCI_PLTFM is not set
# CONFIG_SND_USB_AUDIO is not set
# CONFIG_SOUND is not set
# CONFIG_TCG_TPM is not set
# CONFIG_TCG_CRB is not set
# CONFIG_TCG_TIS is not set
# CONFIG_AGP is not set
# CONFIG_TTY_PRINTK is not set
# CONFIG_INPUT_UINPUT is not set
# CONFIG_USB_STORAGE is not set
# CONFIG_USB_SERIAL is not set
# CONFIG_VFAT_FS is not set
# CONFIG_VIRTIO_BALLOON is not set
# CONFIG_VIRTIO_CONSOLE is not set
# CONFIG_CRYPTO_DEV_VIRTIO is not set
# CONFIG_VIRTIO_MMIO is not set
# CONFIG_VIRTIO_NET is not set
# CONFIG_SCSI_VIRTIO is not set
# CONFIG_HID_WACOM is not set
# CONFIG_USB_XHCI_HCD is not set

# Second part of the kernel trimdown efforts for the telltale use case.
# This config file amendement removes as much unneeded non module type config options inherited from the AGL default config as as possible
# Removing package filtering
# CONFIG_NETFILTER is not set
# No routing in the telltale use case. 
# CONFIG_IP_ADVANCED_ROUTER is not set
# No Bluetooth needed in telltale usecase. 
# CONFIG_BT is not set
# CONFIG_BT_RFCOMM is not set
# CONFIG_BT_RFCOMM_TTY is not set
# CONFIG_BT_CMTP is not set
# CONFIG_BT_BNEP_MC_FILTER is not set
# CONFIG_BT_BNEP_PROTO_FILTER is not set
# CONFIG_BT_HIDP is not set
# CONFIG_BT_6LOWPAN is not set
# CONFIG_BT_LEDS is not set
# CONFIG_BT_HCIBTUSB is not set
# CONFIG_BT_HCIUART is not set
# CONFIG_BT_HCIUART_BCSP is not set
# CONFIG_BT_HCIUART_ATH3K is not set
# CONFIG_BT_HCIBCM203X is not set
# CONFIG_BT_HCIBPA10X is not set
# CONFIG_BT_HCIBFUSB is not set
# CONFIG_BT_HCIVHCI is not set
# CONFIG_BT_MRVL is not set
# CONFIG_BT_ATH3K is not set
# No USB support needed. Need to test if this causes the mouse flickering issue
# CONFIG_USB_SUPPORT is not set
# CONFIG_USB is not set
# No sound support needed
# CONFIG_SOUND is not set
# CONFIG_SND is not set
# No NFC needed
# CONFIG_NFC is not set
# CONFIG_I2C is not set
# No Webcams needed
# CONFIG_USB_GSPCA is not set
# no Gaming on a cluster display :)
# CONFIG_GAMEPORT is not set
# CONFIG_INPUT_JOYSTICK is not set
# no drawing tablets
# CONFIG_INPUT_TABLET is not set
# USB networking is not needed
# CONFIG_USB_USBNET is not set
# I think the following are for analog internet over phone lines...
# CONFIG_PPP is not set
# CONFIG_SLIP is not set
# Don't need Native language characters in FAT file names
# CONFIG_NLS_CODEPAGE_737 is not set
# CONFIG_NLS_CODEPAGE_775 is not set
# CONFIG_NLS_CODEPAGE_850 is not set
# CONFIG_NLS_CODEPAGE_852 is not set
# CONFIG_NLS_CODEPAGE_855 is not set
# CONFIG_NLS_CODEPAGE_857 is not set
# CONFIG_NLS_CODEPAGE_860 is not set
# CONFIG_NLS_CODEPAGE_861 is not set
# CONFIG_NLS_CODEPAGE_862 is not set
# CONFIG_NLS_CODEPAGE_863 is not set
# CONFIG_NLS_CODEPAGE_864 is not set
# CONFIG_NLS_CODEPAGE_865 is not set
# CONFIG_NLS_CODEPAGE_866 is not set
# CONFIG_NLS_CODEPAGE_869 is not set
# CONFIG_NLS_CODEPAGE_936 is not set
# CONFIG_NLS_CODEPAGE_950 is not set
# CONFIG_NLS_CODEPAGE_932 is not set
# CONFIG_NLS_CODEPAGE_949 is not set
# CONFIG_NLS_CODEPAGE_874 is not set
# CONFIG_NLS_ISO8859_8 is not set
# CONFIG_NLS_CODEPAGE_1250 is not set
# CONFIG_NLS_CODEPAGE_1251 is not set
# CONFIG_NLS_ASCII is not set
# CONFIG_NLS_ISO8859_2 is not set
# CONFIG_NLS_ISO8859_3 is not set
# CONFIG_NLS_ISO8859_4 is not set
# CONFIG_NLS_ISO8859_5 is not set
# CONFIG_NLS_ISO8859_6 is not set
# CONFIG_NLS_ISO8859_7 is not set
# CONFIG_NLS_ISO8859_9 is not set
# CONFIG_NLS_ISO8859_13 is not set
# CONFIG_NLS_ISO8859_14 is not set
# CONFIG_NLS_ISO8859_15 is not set
# CONFIG_NLS_KOI8_R is not set
# CONFIG_NLS_KOI8_U is not set
# CONFIG_NLS_UTF8 is not set
# No PCI hotplugging
# CONFIG_HOTPLUG_PCI is not set
# No parallel port support
# CONFIG_PARPORT is not set
# CONFIG_PARPORT_PC is not set
# No floppy disc support needed
# CONFIG_BLK_DEV_FD is not set
# No usb Ethernet adapters needed
# CONFIG_USB_CATC is not set
# CONFIG_USB_KAWETH is not set
# CONFIG_USB_PEGASUS is not set
# CONFIG_USB_RTL8150 is not set
# CONFIG_USB_RTL8152 is not set
# CONFIG_USB_LAN78XX is not set
# CONFIG_USB_NET_CDC_EEM is not set
# CONFIG_USB_NET_CDC_MBIM is not set
# CONFIG_USB_NET_DM9601 is not set
# CONFIG_USB_NET_SR9800 is not set
# CONFIG_USB_NET_SMSC75XX is not set
# CONFIG_USB_NET_SMSC95XX is not set
# CONFIG_USB_NET_MCS7830 is not set
# CONFIG_USB_ALI_M5632 is not set
# CONFIG_USB_AN2720 is not set
# CONFIG_USB_KC2190 is not set
# CONFIG_USB_NET_QMI_WWAN is not set
# CONFIG_USB_HSO is not set
# CONFIG_USB_IPHETH is not set
# CONFIG_USB_SIERRA_NET is not set
# bunch of samples can go I suppose
# CONFIG_SAMPLES is not set
# CONFIG_SAMPLE_TRACE_EVENTS is not set
# CONFIG_SAMPLE_TRACE_PRINTK is not set
# CONFIG_SAMPLE_KOBJECT is not set
# CONFIG_SAMPLE_KPROBES is not set
# CONFIG_SAMPLE_HW_BREAKPOINT is not set
# CONFIG_SAMPLE_KFIFO is not set
# CONFIG_SAMPLE_CONFIGFS is not set
# Lets get rid of all wireless drivers at once
# CONFIG_CFG80211 is not set 
# CONFIG_BCMA is not set
# Power Management debugging can go 
# CONFIG_PM_DEBUG is not set
# CONFIG_PM_ADVANCED_DEBUG is not set
# EFI BIOS support can go
# CONFIG_EFI is not set
# CONFIG_EFI_STUB is not set
# CPU frequency statistics are not needed
# CONFIG_CPU_FREQ_STAT is not set
# No need for foreign partitioning in the telltale use case
# CONFIG_PARTITION_ADVANCED is not set
# No network boot needed
# CONFIG_IP_PNP is not set
# CONFIG_BPF_SYSCALL is not set
# not running on xeon server CPUs
# CONFIG_MCORE2 is not set
# CONFIG_MICROCODE_AMD is not set
# CONFIG_IA32_EMULATION is not set
# not hosting any VMs
# CONFIG_KVM is not set
# CONFIG_VHOST_NET is not set
# CONFIG_USB_HIDDEV is not set
# CONFIG_USB_EHCI_HCD is not set
# CONFIG_USB_EHCI_ROOT_HUB_TT is not set
# CONFIG_USB_UHCI_HCD is not set
# CONFIG_USB_ACM is not set
# CONFIG_RTC_CLASS is not set
# CONFIG_RTC_DRV_DS1307 is not set
# CONFIG_RTC_DRV_DS3232 is not set
# CONFIG_CRYPTO_TEST is not set

