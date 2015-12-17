$(eval $(call IMPORT,network,-DMODULE_SYMBOL=__libSceNet -DMODULE_PATH=\"libSceNet.sprx\",	\
	sceNetSocket sceNetSocketClose sceNetConnect sceNetSend sceNetBind	\
	sceNetListen sceNetAccept sceNetRecv sceNetSocketAbort	\
	sceNetGetsockname sceNetGetsockopt sceNetSetsockopt sceNetInetNtop	\
	sceNetInetPton sceNetHtonll sceNetHtonl sceNetHtons sceNetNtohll	\
	sceNetNtohl  sceNetNtohs))
