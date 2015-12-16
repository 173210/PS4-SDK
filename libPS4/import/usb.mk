$(eval $(call IMPORT,usb,__libSceUsbd,\"libSceUsbd.sprx\",	\
	sceUsbdInit sceUsbdExit sceUsbdGetDeviceList sceUsbdFreeDeviceList	\
	sceUsbdGetDeviceDescriptor sceUsbdOpen sceUsbdOpenDeviceWithVidPid	\
	sceUsbdClose sceUsbdSetInterfaceAltSetting sceUsbdClearHalt	\
	sceUsbdResetDevice sceUsbdCheckConnected sceUsbdControlTransfer	\
	sceUsbdBulkTransfer sceUsbdInterruptTransfer	\
	sceUsbdGetActiveConfigDescriptor sceUsbdGetConfigDescriptor	\
	sceUsbdGetConfigDescriptorByValue sceUsbdFreeConfigDescriptor))
