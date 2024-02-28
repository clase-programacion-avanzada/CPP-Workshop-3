#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "List.h"
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

struct TextFileHandler {

    string fileName;

    TextFileHandler(string path) {
        fileName = path;
    }

    List<string> readLines() {

        List<string> lines;
        
        fstream file;

        //We open the file.
        //We use the open() function from the file stream object.
        file.open(fileName, ios::in);//We open the file in read mode.
        
        //We check if the file was opened correctly.
        if (file.fail()) {
            return lines;
        }

        string line;
        //We use the getline() function to read the file line by line.
        //istream& getline (istream&  is, string& str, char delim);
        // we can use it inside a while loop because it returns true if the line was read correctly.
        
        while (getline(file, line)) {
            lines.add(line);
            
        }

        file.close();

        return lines;

    }

    bool writeLines(List<string> lines, unsigned int mode = ios::out) {

        fstream file;

        
        //We can open a file using the open() function.
        //The first parameter is the name of the file, the second parameter is the mode.
        //The mode can be either ios::in (read only) or ios::out (write only) .
        //The third parameter is the mode of the file.
        file.open(fileName, ios::out);//We open the file in write mode.
        //The open() function returns a boolean value.
        //If the file is opened successfully, the function returns true.
        //If the file is not opened, the function returns false.
        //We need to make sure that this stream is succesfully open before we can write to it.
        
        if(file.fail()){
            return false;
        }
        
        //The process of writing to a file is done using the write() function. 
        //The approach is very similar of writing into a console. 
        //in the console, we use the << operator (i.e cout << "Hello World!"),
        //with files, we replace cout with file.
        for (int i = 0; i < lines.size; i++) {
            
            if(i != 0) {
                file<<endl;
            }
            file << lines.get(i);
        }
        //We must be sure that we close the file when we are done writing to it.
        file.close();


        return true;

    }

    bool writeSingleLine(string line, unsigned int mode = ios::out | ios::app) {
            

        return true;

    }

};

List<string> split(string line, char delimiter) {
        
        List<string> tokenList;
        //split line into tokens
        //stringstream is a stream class to operate on strings.
        stringstream ss(line);

        //see that ss.good() is used to check if the stream is good
        //it means that it checks if the stream has not reached the end of the line
        while (ss.good()) {
            //declare a string variable to store the token
            //a token is a string separated by a delimiter
            //i.e 1;1994;90;The Shawshank Redemption
            //  the delimiter is the semicolon (;)
            //  the tokens are: 1, 1994, 90, The Shawshank Redemption
            string token;
            //getline() is used to read a string from the stream
            //getline() extracts characters from the stream until it finds the delimiter character
            //and stores them in the string object 'token'
            getline(ss, token, delimiter);

            //add token to the tokenList
            tokenList.add(token);
        }

        return tokenList;

}

#endif /* MYHEADER_H */