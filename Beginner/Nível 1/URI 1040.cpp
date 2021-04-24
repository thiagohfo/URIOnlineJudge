//
//  URI 1040.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  float N1 = 0, N2 = 0, N3 = 0, N4 = 0, NR = 0, media = 0;
  int p1=2, p2=3, p3=4, p4=1;
  
  cin >> setprecision(1) >> N1 >> N2 >> N3 >> N4;
  
  media = ((N1*p1) + (N2*p2) + (N3*p3) + (N4*p4)) / 10;
  
  if (media >= 7){
    cout << fixed << setprecision(1) << "Media: " << media << endl;
    cout << "Aluno aprovado." << endl;
  } else if (media < 5){
    cout << fixed << setprecision(1) << "Media: " << media << endl;
    cout << "Aluno reprovado." << endl;
  } else if (media < 7){
    cout << fixed << setprecision(1) << "Media: " << media << endl;
    cout << "Aluno em exame." << endl;
    cin >> NR;
    cout << fixed << setprecision(1) << "Nota do exame: " << NR << endl;
      
    media = (NR + media) / 2;
      
    if (media >= 5.0){
      cout << "Aluno aprovado." << endl;
    } else if(media < 5){
      cout << "Aluno reprovado." << endl;
    }
      
    cout << fixed << setprecision(1) << "Media final: " << media << endl;
  }
  
  return 0;
}
