THEOS_DEVICE_IP = localhost -p 2222
DEBUG = 1
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WeiboFunTweak
WeiboFunTweak_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

clean::
	rm -rf ./packages/*
before-package::
	cp ./script/postinst ./.theos/_/DEBIAN/
	cp ./script/postrm ./.theos/_/DEBIAN/