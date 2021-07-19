TARGET = PSPcw
OBJS = main.o print.o ctrl.o string.o instructions.o utility.o write_screen.o cw.o readfilemode.o

INCDIR = 
CFLAGS = -O2 -G0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR = 
LDFLAGS =
LIBS = -lpsppower 
EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = PSPcw
PSP_EBOOT_ICON = ICON0.png
#PSP_EBOOT_PIC1 = 


PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak
