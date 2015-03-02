#include <allegro.h>
#define SCREENWIDTH 640
#define SCREENHEIGHT 480

int main() {
	allegro_init();
	install_keyboard();
	set_gfx_mode( GFX_AUTODETECT, SCREENWIDTH, SCREENHEIGHT, 0, 0);
	acquire_screen();
	textout_ex(screen, font, "Esto es una prueba de Allegro", 10, 10, makecol(255, 0, 0), makecol(0, 0, 0));
	textout_ex(screen, font, "Pulse Esc para salir", 10, 10, makecol(255, 0, 0), makecol(0, 0, 0));
	release_screen();
	while ( !key[KEY_ESC] ) {
		clear_keybuf();
		acquire_screen();
		release_screen();
		rest(100);
	}
	return 0;
}
END_OF_MAIN();

