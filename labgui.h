// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef labgui_h
#define labgui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <iostream>
#include <FL/fl_ask.H>
using namespace std;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *voltage;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *temperature;
#include <FL/Fl_Output.H>
extern Fl_Output *msg;
Fl_Double_Window* make_window();
#endif