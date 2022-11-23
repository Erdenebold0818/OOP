#include<iostream>

#include <string.h>

#include <math.h>

using namespace std;

class matrix {
  private:
    int m, n;
  	float value[20][20];
  	
  	
public:
    // matrix muriin too olgoh
    void setRow(int row) {
      this -> m = row - 1;
    }
  // matrix baganii too olgoh
  void serColumn(int column) {
    this -> n = column - 1;
  }
  // matrix -d i dugaar baganii j dugeer murund x utgagiig oruulah
  void setValueByIndex(int i, int j, int x) {
    if (i > 0 && i <= this -> getRow()) {
      if (j > 0 && j <= this -> getColumn()) {
        this -> value[i - 1][j - 1] = x;
      } else cout << " oruulsan index buruu" << "/n";
    } else cout << " oruulsan index buruu " << "/n";
  }
  // row too butsaah
  int getRow() {
    return this -> m + 1;
  }
  // column too butsaah
  int getColumn() {

    return this -> n + 1;
  }
  // Row i column j butsaah, oldohgu bol yuch butsaahgu
  float getValueByIndex(int i, int j) {
    if (i > 0 && i <= this -> getRow()) {
      if (j > 0 && j <= this -> getColumn()) {
        return this -> value[i - 1][j - 1];
      } else cout << " oruulsan index buruu" << "/n";
    } else cout << " oruulsan index buruu " << "/n";
  }
  // class baiguulagch function
  matrix() {
    this -> setRow(0);
    this -> serColumn(0);
  }
  // class iin parameter baiguulagch
  matrix(int row, int column) {
    this -> setRow(row);
    this -> serColumn(column);
  }
  // buh mur bagana d garaas utga avah
  void utgaMatrix() {
    for (int i = 0; i < this -> getRow(); i++) {
      for (int j = 0; j < this -> getColumn(); j++) {
        cout << i + 1 << " Mornii" << j + 1 << " dugeer baganii emelent =";
        cin >> this -> value[i][j];
      }

    }
  }
  // matrix helbert hevleh
  void print() {
    for (int i = 0; i < this -> getRow(); i++) {
      for (int j = 0; j < this -> getColumn(); j++) {
        cout << this -> value[i][j] << "";
      }
      cout << "|/n";
    }
  }
  //matrix + dahin todothoiloh
  matrix operator + (matrix a) {
    // a-d nemj bui 2 matrix iin mur bagnatai ijil toonii mur bagna baigulah
    matrix ad(this -> getRow(), this -> getColumn());
    // nemegdsen 2 matrix iin mur baganii too ijil bh ystoi
    if (this -> getRow() == a.getRow()) {
      if (this -> getColumn() == a.getColumn()) {
        for (int i = 0; i < this -> getRow(); i++) {
          for (int j = 0; j < this -> getColumn(); j++) {
            ad.setValueByIndex(i + 1, j + 1,
              this -> value[i][j] + a.getValueIndex(i + 1, j + 1));

          }
          return ad;
        } else cout << " index tohirohgui , Nemeh bolomjgui";
      } else cout << " index tohirohgui , Nemeh bolomjgui";

    }
    // matrix nemeh uildliig matrix deer togtmol too nemeh nuhtsuld dahin todorhoiloh
    matrix operator + (float x) {
      matrix ad(this -> getRow(), this -> getColumn());
      for (int i = 0; i < this -> getRow(); i++) {
        for (int j = 0; j < this -> getColumn(); j++) {
          ad.setValueByIndex(i + 1, j + 1, this -> value[i][j] + x);

        }
      }
      return ad;
    }
    // matrix hasah uidliig dahin todorhoiloh
    matrix operator - (matrix a) {
      matrix ad(this -> getRow(), this -> getColumn());
      if (this -> getRow() == a.getRow()) {
        if (this -> getColumn() == a.getColumn()) {
          for (int i = 0; i < this -> getRow(); i++) {
            for (int j = 0; j < this -> getColumn(); j++) {
              ad.setValueByIndex(i + 1, j + 1,
                this -> value[i][j] + a.getValueIndex(i + 1, j + 1) -
                a.getValueByIndex(i + 1, j + 1));
            }
          }
          return ad;
        } else cout << " index tohirohgui , hasah bolomjgui";
      } else cout << " index tohirohgui , hasah bolomjgui";
    }
    // matrix nemeh uildliig dahin todorhoiov
    matrix operator * (matrix a) {
      matrix ad(this -> getRow(), this -> getColumn());
      if (this -> getColumn() == a.getRow()) {
        float s;
        for (int i = 0; i < this -> getRow(); i++) {
          for (int j = 0; j < this -> getColumn(); j++) {
            s = 0;
            for (int k = 0; k < this -> getColumn(); k++) {
              s = s + this -> getValueByIndex(i + 1, k + 1) * a.getValueByIndex(k + 1,
                j + 1);
            }
            ad.setValueByIndex(i + 1; j + 1, s);
          }
        }
        return ad;
      }
    }
    // matrix buh utagiig 1 eer nemegduuleh operator todorhoilov
    void operator++(int) {
      float x;
      for (int i = 0; i < this -> getRow(); i++) {
        for (int j = 0; j < this -> getColumn(); j++) {
          x = this -> getValueByIndex(i + 1, j + 1);
          x++;
          this -> getValueByIndex(i + 1, j + 1, x);
        }

      }
    }
    //matrix buh utgiig 1 hasah
    void operator--(int) {
      float x;
      for (int i = 0; i < this -> getRow(); i++) {
        for (int j = 0; j < this -> getColumn(); j++) {
          x = this -> getValueByIndex(i + 1, j + 1);
          x--;
          this -> setValueByIndex(i + 1, j + 1, x);
        }
      }
    }
    // matrix uuriinh n utgiig uur matrixiin utgaar nemegduuleh 
    void operator += (matrix a) {
      if (this -> getRow() == a.getRow()) {
        if (this -> getColumn() == a.getColumn()) {
          float x;
          for (int i = 0; i < this.getRow(); i++) {
            for (int j = 0; j < this -> getColumn(); j++) {
              x = this -> getValueByIndex(i + 1, j + 1) + a.getValueByIndex(i + 1, j + 1);
              this -> setValueByIndex(i + 1, j + 1);
            }
          }
        } else cout << " index tohirohgui , nemeh bolomjgui";
      } else cout << " index tohirohgui , nemeh bolomjgui";

    }
    // matrix uurinh utgiig uur matrixiin utgaar hasah 
    void operator -= (matrix a) {
      if (this -> getRow() == a.getRow()) {
        if (this -> getColumn() == a.getColumn()) {
          float x;
          for (int i = 0; i < this.getRow(); i++) {
            for (int j = 0; j < this -> getColumn(); j++) {
              this -> setValueByIndex(i + 1, j + 1,
                this -> getValueByIndex(i + 1, j + 1) - a.getValueByIndex(i + 1, j + 1));
            }
          }
        } else cout << " index tohirohgui , Nemeh bolomjgui";
      } else cout << " index tohirohgui , Nemeh bolomjgui";
    }
    // matrix uurinh n utgiig uur matritsiin utgaar urjuuleh
    void operator *= (matrix a) {
      if (this -> getRow() == a.getRow()) {
        if (this -> getColumn() == a.getColumn()) {
          float s;
          for (int i = 0; i < this -> getRow(); i++) {
            for (int j = 0; j < this -> getColumn(); j++) {
              for (int k = 0; k < this -> getColumn(); k++) {
                s = s + this -> getValueByIndex(i + 1, k + 1) * a.getValueByIndex(k + 1, j + 1);
              }
              this -> setValueByIndex(i + 1; j + 1, s);
            }

          }
        }
      }
    }
    // utga avah
    float & operator[][](int i, int j) {
      if (this -> getRow() >= i) {
        if (this -> getColumn() >= j) {
          return this -> getValueByIndex(i, j);
        } else return this -> getValueByIndex(1, 1);
      } else return this -> getValueByIndex(1, 1);
    }
    // horvuuleh
    matrix operator ^ (matrix a) {
      matrix ad(this -> getColumn(), this -> getRow());
      float s;
      cout << "in operator:\n";
      a.print();
      for (int i = 0; i < this -> getRow(); i++) {
        for (int j = 0; j < this -> getColumn(); j++) {
          s = a.getValueByIndex(i + 1, j + 1);
          cout << " s=" << s << "\n";
          ad.setValueByIndex(i + 1, j + 1, s);
          cour << " ad=" << ad.getValueByIndex(j + 1, i + 1) << "\n";
        }
      }
      11
      cout << " ad is = \n";
      ad.print();
      return ad;
    }
  }
};
  
  
  int main(){
      cout << " lab7\n";
      matrix a(2, 2);
      matrix b(2, 2);
      cout << " A matrix \n";
      a.utgaMatrix();
      cout << "B matrix\n";
      b.utgaMatrix();
      cout << " A matrix : \n";
      a.print();
      cout << " a matrix inversed:\n";
      matrix r(2, 2);
      r = r ^ a;
      r.print();
      cout << "B matrix : \n";
      b.print();
      matrix x = a + b;
      cout << " X = A + b \n";
      x.print();
      matrix c = a - b;
      cout << " C = A - B\n";
      c.print();
      cout << " D= A * B \n";
      matrix d = a * b;
      12
      d.print();
      cout << " X += x \n";
      x += x;
      x.print();
	}

