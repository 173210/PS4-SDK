$(eval $(call IMPORT,pad,-DMODULE_SYMBOL=__libScePad -DMODULE_PATH=\"libScePad.sprx\",	\
	scePadInit scePadOpen scePadClose scePadRead scePadReadState))
