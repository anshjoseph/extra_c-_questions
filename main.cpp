#include <iostream>
using namespace std;



class triangle{
  private:
  int row;
  int col;


  public:
  int tri_alph(int row_inp);
  int tri_num(int row_inp);
};


int triangle::tri_alph(int row_inp)
{
    int rows = row_inp, number = 97;
    rows = rows - 1;
    int row = rows + 97; 
    for(int i = 97; i <= row; i++)
    {
        for(int j = 97; j <= i; ++j)
        {   
            char io = (char)number;
            cout << io << " ";
            ++number;
        }
        cout << endl;
    }
    return 0;
}


int triangle::tri_num(int row_inp){
    int rows = row_inp, number = 1;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {   
            cout << number << " ";
            ++number;
        }
        cout << endl;
    }
    return 0;
}




int main(){
  triangle t1;
  t1.tri_alph(3);
  cout << endl;
  t1.tri_num(3);
  return 0;
}
