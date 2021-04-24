//
//  URI 2165.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string tweet;
    
    getline(cin, tweet);
    
    if(tweet.size() <= 140){
        cout << "TWEET" << endl;
    }
    else{
        cout << "MUTE" << endl;
    }
    
    return 0;
}
