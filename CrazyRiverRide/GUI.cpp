#include<allegro.h>
#include<iostream>





int main(){

    ALLEGRO_DISPLAY *display;
    
    if(!al_init())
    {
        al_show_native_message_box(NULL,NULL, "Could not initialize Allegro 5", NULL, NULL);
        return -1;
    }

    display = al_create_display(800,600);
    
    if(!display)
    {
        al_show_native_message_box(display, "Sample Title", "Display Settings","DWCNBS",NULL, ALLEGRO_MESSAGE)
    }

    al_show_native_message_box(display,"MessageBox Title","Error", "Display window could not be shown", NULL, NULL);
       
    al_destroy_display(display);

     





    return 0;
}

END_OF_MAIN();
