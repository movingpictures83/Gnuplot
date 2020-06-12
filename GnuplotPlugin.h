#ifndef GNUPLOTPLUGIN_H
#define GNUPLOTPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class GnuplotPlugin : public Plugin
{
public: 
 std::string toString() {return "Gnuplot";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
