#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "GnuplotPlugin.h"

void GnuplotPlugin::input(std::string file) {
 inputfile = file;
}

void GnuplotPlugin::run() {}

void GnuplotPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "echo";
myCommand += " ";
myCommand += std::string("\"set term png; set output \\\"")+outputfile+std::string("\\\"; plot \\\"")+inputfile+std::string("\\\"; quit();\" | gnuplot");
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<GnuplotPlugin> GnuplotPluginProxy = PluginProxy<GnuplotPlugin>("Gnuplot", PluginManager::getInstance());
