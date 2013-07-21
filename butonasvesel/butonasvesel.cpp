#include <iostream>
#include <stdio.h>
using namespace std;

#include <gtkmm.h>

void when_clicking_butonas();

int main(int argc, char* argv[]) {
	Gtk::Main kit(argc, argv);

	Gtk::Window blindow;
	Gtk::Button butonas("Click on me, lad");

	blindow.set_default_size(480, 240);
	blindow.set_title("A window");
	blindow.set_position(Gtk::WIN_POS_CENTER);
	blindow.set_border_width(10);

	butonas.signal_clicked().connect(
		sigc::ptr_fun(&when_clicking_butonas)
	);

	butonas.show();
	blindow.add(butonas);

	Gtk::Main::run(blindow);

	return 0;
}

void when_clicking_butonas() {
	cout << "Well... I don't have to describe your current action" << endl;
    	// FILE * f = popen( "ls -al", "r" );
        //if ( f == 0 ) {
	//fprintf( stderr, "Could not execute\n" );
	//return 1;
	//}
}
