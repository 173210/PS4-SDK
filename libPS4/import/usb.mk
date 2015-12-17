$(eval $(call IMPORT,usb,-DMODULE_SYMBOL=__libSceUsbd -DMODULE_PATH=\"libSceUsbd.sprx\",	\
	sceUsbdInit sceUsbdExit sceUsbdGetDeviceList sceUsbdFreeDeviceList	\
	sceUsbdGetDeviceDescriptor sceUsbdOpen sceUsbdOpenDeviceWithVidPid	\
	sceUsbdClose sceUsbdSetInterfaceAltSetting sceUsbdClearHalt	\
	sceUsbdResetDevice sceUsbdCheckConnected sceUsbdControlTransfer	\
	sceUsbdBulkTransfer sceUsbdInterruptTransfer	\
	sceUsbdGetActiveConfigDescriptor sceUsbdGetConfigDescriptor	\
	sceUsbdGetConfigDescriptorByValue sceUsbdFreeConfigDescriptor))
