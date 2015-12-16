$(eval $(call IMPORT,network,__libSceNet,\"libSceNet.sprx\",	\
	sceNetSocket sceNetSocketClose sceNetConnect sceNetSend sceNetBind	\
	sceNetListen sceNetAccept sceNetRecv sceNetSocketAbort	\
	sceNetGetsockname sceNetGetsockopt sceNetSetsockopt sceNetInetNtop	\
	sceNetInetPton sceNetHtonll sceNetHtonl sceNetHtons sceNetNtohll	\
	sceNetNtohl  sceNetNtohs))
