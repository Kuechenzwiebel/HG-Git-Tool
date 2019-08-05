//
//  main.cpp
//  HG-Git-Tool
//
//  Created by Tobias Pflüger on 05.08.19.

//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.

//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:

//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//  3. This notice may not be removed or altered from any source distribution.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    if(argc != 2) {
        cout << "Invalid number of arguments!" << endl;
        return -1;
    }
    
    system("git status");
    cout << "Do you want to precede? y/n\t";
    string input;
    cin >> input;
    
    if(input == "y") {
        system("git add --all");
        string commitMessage = "git commit -m ";
        commitMessage.push_back('"');
        commitMessage += argv[1];
        commitMessage.push_back('"');
        system(commitMessage.c_str());
        system("git push");
    }
    
    return 0;
}
