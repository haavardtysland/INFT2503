#include <gtkmm.h>
using namespace std;

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry first_name;
  Gtk::Entry last_name;
  Gtk::Label first_name_label;
  Gtk::Label last_name_label;
  Gtk::Button button;
  Gtk::Label label;

  Window() {
    button.set_label("Combine names");
    button.set_sensitive(false);
    first_name_label.set_text("First name");
    last_name_label.set_text("Last name");

    vbox.pack_start(first_name_label);
    vbox.pack_start(first_name);  //Add the widget entry to vbox
    vbox.pack_start(last_name_label);
    vbox.pack_start(last_name);  //Add the widget entry to vbox
    vbox.pack_start(button); //Add the widget button to vbox
    vbox.pack_start(label);  //Add the widget label to vbox

    add(vbox);  //Add vbox to window
    show_all(); //Show all widgets

    first_name.signal_changed().connect([this]() {
      if(!first_name.get_text().empty() && !last_name.get_text().empty()){
          button.set_sensitive(true);
      } else {
          button.set_sensitive(false);
      }
    });

    last_name.signal_changed().connect([this]() {
      if(!first_name.get_text().empty() && !last_name.get_text().empty()){
          button.set_sensitive(true);
      } else {
          button.set_sensitive(false);
      }
    });
    
    button.signal_clicked().connect([this]() {
      label.set_text("Names combined: " + first_name.get_text() + " " + last_name.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  window.set_title("Øving 4");
  gtk_main.run(window);
}
