/*  Copyright 2012 Daniel Wilson. * *  gcatmain.cpp *  Part of GCAT (General Computational Analysis Tool). * *  GCAT is free software: you can redistribute it and/or modify *  it under the terms of the GNU General Public License as published by *  the Free Software Foundation, either version 3 of the License, or *  (at your option) any later version. *   *  GCAT is distributed in the hope that it will be useful, *  but WITHOUT ANY WARRANTY; without even the implied warranty of *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the *  GNU General Public License for more details. *   *  You should have received a copy of the GNU General Public License *  along with GCAT. If not, see <http://www.gnu.org/licenses/>. */#include <DAG/DAG.h>#include <exception>#ifdef main#  error main is defined#endif//*** gcat (General Computational Analysis Tool) ***//int main (int argc, char * const argv[]) {	try {			// Read the command line arguments		if(argc!=2) error("SYNTAX: gcat xmlfile");		const char* xmlfile = argv[1];		// Instantiate the DAG		gcat::DAG* dag = new gcat::DAG;		// Set the root node for the XML file		dag->add_root_element("gcat");		// Permit in the XML file the section <libraries> <library file="XXX"/> ... </libraries>		dag->enable_libraries();		// Load the core XML schema and associated parser functions		dag->add_chameleon(gcat::load_gcat_core_library());		// Read the XML file, and process the libraries section		dag->readXML_libraries(xmlfile);		// Build the DAG		dag->connect_graph();		dag->check_validity();				// Perform inference		dag->perform_inference();	}	catch (std::exception &e) {		error(e.what());	}	catch (...) {		error("Unknown exception");	}	return 0;}