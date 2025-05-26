#ifndef TUTORIAL_BOARD_H_
#define TUTORIAL_BOARD_H_

#define ROW_NUM 4
#define COLUMN_NUM 5

#define ROW_PINS ((int[]){11, 10, 9, 6})

#define COLUMN_PINS ((int[]){7, 5, 4, 3, 2})

int row_pin_[4];
int column_pin_[5];

namespace TutorialBoard
{
  inline void SetUp()
  {
    for(int i = 0; i < ROW_NUM; i++)
    {
      row_pin_[i] = ROW_PINS[i];
      pinMode(row_pin_[i], OUTPUT);
    }

    for(int i = 0; i < COLUMN_NUM; i++)
    {
      column_pin_[i] = COLUMN_PINS[i];
      pinMode(column_pin_[i], OUTPUT);
    }
  }

  inline void On(int x, int y)
  {
    digitalWrite(row_pin_[y-1], HIGH);
    digitalWrite(column_pin_[x-1], LOW);
  }

  inline void On(int x, int y, int power)
  {
    int value = map(power, 0, 100, 0, 255);
    analogWrite(row_pin_[y-1], value);
    digitalWrite(column_pin_[x-1], LOW);
  }

  inline void Off(int x, int y)
  {
    digitalWrite(row_pin_[y-1], LOW);
    digitalWrite(column_pin_[x-1], HIGH);
  }

  inline void AllOn()
  {
    for(int x = 0; x < COLUMN_NUM; x++)
    {
      for(int y = 0; y < ROW_NUM; y++)
      {
        On(x+1, y+1);
      }
    }
  }

  inline void AllOff()
  {
    for(int x = 0; x < COLUMN_NUM; x++)
    {
      for(int y = 0; y < ROW_NUM; y++)
      {
        Off(x+1, y+1);
      }
    }
  }


}

#endif