$(eval $(call IMPORT,camera,-DMODULE_SYMBOL=__libSceCamera -DMODULE_PATH=\"libSceCamera.sprx\",	\
	sceCameraOpen sceCameraClose sceCameraIsAttached sceCameraGetFrameData	\
	sceCameraStart sceCameraStop sceCameraGetDeviceInfo sceCameraGetDeviceConfig	\
	sceCameraGetConfig sceCameraSetConfig))
