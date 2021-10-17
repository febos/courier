#include <iostream>
#include <string>
#include <vector>
#include <complex>

using namespace std;

int main(int argc, char **argv) {
     
    vector<string> args(argv + 1, argv + argc);

	string infile, outfile;
	string mode;

    for (int i = 0; i < args.size(); i++) {
        if (args[i] == "-h" || args[i] == "--help") {
            cout << "Syntax: courier [OPTIONS] -i <infile> -o <outfile>" << endl;
            cout << "Options:" << endl;
            cout << " -dft1 --dft1 - perform 1-dimensional DFT, input file must contain a single line of space-separated complex values, e.g. \"(1,0) (2,2) (2,0)\"" << endl;  
            return 0;
        } else if (args[i] == "-i") {
            infile = args[i+1];
        } else if (args[i] == "-o") {
            outfile = args[i+1];
        } else if (args[i] == "--dft1" || args[i] == "-dft1") {
        	mode = "dft1";
        }
    }
    
    cout << "mode=" << mode << " input=" << infile << " output=" << outfile << endl;
    
    if (mode == "dft1") {
    	
    	//auto input  = Parse1D(infile);
    	//auto result = input;
    	//DFT1(&result, &input);
    	//Print1D(outfile);
    
    }
    
    
    return 0;
}

vector<complex<double>> Parse1D(string filename) {
	return {(0,0),};
}
