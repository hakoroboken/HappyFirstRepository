#include "TutorialBoard.h"

void setup()
{
  TutorialBoard::SetUp();
}

void loop()
{
  for(int i = 1; i < 5; i++)
  {
    for(int l = 1; l < 6; l++)
    {
      TutorialBoard::On(l, i); 
      delay(500);
      TutorialBoard::AllOff();
      delay(500);
    }
    
  }
   /* TutorialBoard::On(2, 2); 
    delay(500);
    TutorialBoard::OFF();
    dalay(500);
   TutorialBoard::On(5, 1);
    TutorialBoard::On(4, 4);
    TutorialBoard::On(1, 1);
    delay(200);
   TutorialBoard::On(2, 3);
  delay(500);
  */
  TutorialBoard::AllOff();
  delay(500);
  
}


/*#include "TutorialBoard.h"

void setup()
{
  TutorialBoard::SetUp();

}

void loop()
{
  TutorialBoard::On(2, 3);
  delay(12);
  TutorialBoard::Off(2, 3);
  delay(20);
}
*/