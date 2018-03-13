METHANE_FLAGS = -DENABLE_SOUND `pkg-config --cflags clanCore-2.1 clanDisplay-2.1 clanApp-2.1 clanGL-2.1 clanGDI-2.1 clanSound-2.1 clanMikMod-2.1`
METHANE_LIBS = `pkg-config --libs clanCore-2.1 clanDisplay-2.1 clanApp-2.1 clanGL-2.1 clanGDI-2.1  clanSound-2.1 clanMikMod-2.1`

OBJF = build/game.o build/baddie.o build/methane.o build/target.o build/maps.o build/gfxoff.o build/mapdata.o build/objlist.o build/doc.o build/bitdraw.o build/global.o build/suck.o build/power.o build/goodie.o build/bititem.o build/player.o build/weapon.o build/bitgroup.o build/boss.o build/sound.o build/gasobj.o build/misc.o

all: message methane

message:
	@echo "Compiling Super Methane Brothers."
	@echo "================================="

methane: ${OBJF}
	g++ ${CXXFLAGS} ${OBJF}	-o methane ${METHANE_LIBS}

clean:
	@rm -Rf build
	@rm -f methane

distclean: clean


# The main source code
build/%.o : sources/%.cpp
	@echo "  Compiling $<..."
	@if [ ! -d build ]; then mkdir build; fi
	gcc ${CXXFLAGS} ${METHANE_FLAGS} -c $< -o $@

