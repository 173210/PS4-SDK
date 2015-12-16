$(eval $(call IMPORT,camera,__libSceCamera,\"libSceCamera.sprx\",	\
	sceCameraOpen sceCameraClose sceCameraIsAttached sceCameraGetFrameData	\
	sceCameraStart sceCameraStop sceCameraGetDeviceInfo sceCameraGetDeviceConfig	\
	sceCameraGetConfig sceCameraSetConfig))
