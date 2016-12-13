/*
 * main.cpp
 *
 *  Created on: Nov 7, 2016
 */
#include <iostream>
#include <cstdio>
#include <limits.h>
#include <stdlib.h>
#include "config.h"
#include "utils.h"

using namespace std;

int main(int argc, char* argv[]) {
    int status = 0;
    for(int i = 1; i < argc; i++) {
        try {
            string arg(argv[i]);

            if(arg == "-n" || arg == "--name") {
                string race(argv[i + 1]);
                string gender(argv[i + 2]);

                string cmd("name-generator "+race+" "+gender);

                status = system(cmd.c_str());

                exit(status);
            } else if(arg == "-v" || arg == "--verbose") {
                fprintf(stdout,"OpenRPG version %s\n", PACKAGE_STRING);

                status = 0;

                exit(status);
            }
        } catch(...) {
            cerr << "invalid arg/use print" << endl;
        }

        exit(status);
    }

    print_file("banners/welcome_mat1");
    
    string in("");

    while(in != "exit") {
        cout << "\33[4morpg\33[0m > ";
        cin >> in;
    }

	return status;
}